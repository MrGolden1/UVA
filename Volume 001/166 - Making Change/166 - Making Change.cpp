#include <iostream>
#include <string>
#include <string.h>
#include <algorithm>
#include <stdio.h>
#include <map>
#include <stack>
#include <queue>
#include <math.h>
#include <iomanip>

using namespace std;

int transaction;
int s[] = { 5 , 10 , 20 , 50 , 100 ,200 };
int num[] = { 0,0,0,0,0,0 };

int check = 0;
int ans = 100000;
int minChange(int mony_so_far, int changes)
{
    if (mony_so_far == transaction )
    {
        ans = min(ans, changes);
        return changes;
    }
    if (mony_so_far > transaction + 201 || changes >= ans)
    {
        return 1000;
    }
    int min = 1000;
    int ch;
    for (int i = 5 ; i > -1; i--)
    {
        if (num[i] > 0)
        {
            check++;
            num[i]--;
            ch = minChange(mony_so_far + s[i], changes + 1);
            num[i]++;
            if (ch < min)
                min = ch;
        }
    }
    for (int i = 5; i > -1; i--)
    {
        if (mony_so_far - s[i] >= transaction)
        {
            ch = minChange(mony_so_far - s[i], changes + 1);
            if (ch < min)
                min = ch;
        }
    }
    return min;
}

int main()
{
    bool terminate;
    while (true)
    {
        ans = 100000;
        terminate = true;
        for (int i = 0; i < 6; i++)
        {
            cin >> num[i];
            if (num[i] != 0)
                terminate = false;
        }
        if (terminate)
        {
            break;
        }
        double buf;
        cin >> buf;
        transaction = (buf+1e-9) * 100;
        cout << setw(3) << minChange(0, 0) << endl;
    }
    return 0;
}