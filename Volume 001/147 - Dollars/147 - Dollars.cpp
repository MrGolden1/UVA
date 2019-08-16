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

int s[] = { 5,10,20,50,100,200,500,1000,2000,5000,10000};
int m = 11;
long long dp[30001][12];
int n = 30001;

void ways()
{
    long long x, y;
    for (int i = 0; i < m; i++)
    {
        dp[0][i] = 1;
    }
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 0; j < m; j++)
        {
            x = (i - s[j] >= 0) ? dp[i - s[j]][j] : 0;
            y = (j > 0) ? dp[i][j - 1] : 0;
            dp[i][j] = x + y;
        }
    }
}

int main()
{
    double buf;
    ways();
    cout.precision(2);
    while (cin >> buf )
    {
        int n = (buf + 1e-9) * 100;
        if (!buf)
            break;
        cout << setw(6) << fixed << buf << setw(17) << dp[n][m - 1] << endl;
    }
    return 0;
}