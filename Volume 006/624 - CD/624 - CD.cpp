#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <sstream>
#include <stdio.h>
#include <math.h>
#include <map>
#include <iomanip>

#define ever (;;)

using namespace std;

int limit;
int n;

int track[20], status[20], sol[20];
int maxSum;

void maxTime(int p)
{
    if (n == p)
    {
        int s = 0;
        for (int i = 0; i < n; i++)
        {
            /*cout << status[i] << "   ";*/
            if (status[i])
            {
                s += track[i];
            }
        }
        /*cout << endl;*/
        if (s > maxSum && s <= limit)
        {
            maxSum = s;
            for (int i = 0; i < n; i++)
            {
                sol[i] = status[i];
            }
        }
        return;
    }
    status[p] = 0;
    maxTime(p + 1);
    status[p] = 1;
    maxTime(p + 1);
}

int main()
{
    while (cin >> limit)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> track[i];
        }
        maxSum = 0;
        maxTime(0);
        for (int i = 0; i < n; i++)
        {
            if (sol[i])
            {
                cout << track[i] << ' ';
            }
        }
        cout << "sum:" << maxSum << endl;
    }
    return 0;
}