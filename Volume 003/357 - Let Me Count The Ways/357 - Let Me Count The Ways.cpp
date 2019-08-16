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

ull dp[30001][5];

int main()
{
    int s[] = { 1,5,10,25,50 };
    for (int i = 0; i < 5; i++)
    {
        dp[0][i] = 1;
    }
    ull x, y;
    for (int i = 1; i < 30001; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            x = (i - s[j] >= 0) ? dp[i - s[j]][j] : 0;
            y = (j > 0) ? dp[i][j - 1] : 0;

            dp[i][j] = x + y;
        }
    }
    int n;
    ull sol;
    while (cin >> n)
    {
        sol = dp[n][4];
        if (sol == 1)
        {
            printf("There is only 1 way to produce %d cents change.\n", n);
        }
        else
        {
            printf("There are %llu ways to produce %d cents change.\n", sol, n);
        }
    }
    return 0;
}