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

#define ull unsigned long long

int n;
int m;
int s;
ull arr[1001][1001];
ull res[1000][1000];
ull totalsum = 0;

void func()
{
    s = n - m + 1;
    for (int i = 0; i < s; i++)
    {
        int sum = 0;
        for (int j = i; j < i + m; j++)
        {
            for (int k = 0; k < m; k++)
            {
                sum += arr[j][k];
            }
        }
        for (int j = 0; j < s; j++)
        {
            if (j == 0)
            {
                res[i][j] = sum;
                totalsum += sum;
                continue;
            }
            for (int k = i; k < i + m; k++)
            {
                sum -= arr[k][j - 1];
                sum += arr[k][j + m - 1];
            }
            res[i][j] = sum;
            totalsum += sum;
        }
    }
}

int main()
{
    bool flag = false;
    while (cin >> n >> m)
    {
        if (flag)
        {
            cout << endl;
        }
        flag = true;    
        totalsum = 0;
        for (int i = n - 1; i > -1; i--)
        {
            for (int j = n - 1; j > -1; j--)
            {
                cin >> arr[i][j];
            }
        }
        func();
        for (int i = s - 1; i > -1; i--)
        {
            for (int j = s - 1; j > -1; j--)
            {
                cout << res[i][j] << endl;
            }
        }
        cout << totalsum << endl;
    }
    return 0;
}