#include <iostream>
#include <string>
#include <string.h>
#include <algorithm>
#include <stdio.h>
#include <map>
#include <stack>
#include <queue>
#include <math.h>

using namespace std;

long long dp[10001][22];

void ways(int s[], int m, int n)
{
    long long x, y;
    for (int i = 0 ; i < n + 1; i++)
    {
        for (int j = 0 ; j < m; j++)
        {
            if (i == 0)
            {
                dp[i][j] = 1;
                continue;
            }
            x = (i - s[j] >= 0) ? dp[i - s[j]][j] : 0;
            y = (j >= 1) ? dp[i][j - 1] : 0;
            dp[i][j] = x + y;
        }
    }
}

int main()
{
    int s[22];
    for (int i = 1; i < 22; i++)
    {
        s[i - 1] = pow(i, 3);
    }
    int n;
    ways(s, 21 , 10000);
    while (cin >> n)
    {
        cout << dp[n][20] << endl;
    }
    return 0;
}