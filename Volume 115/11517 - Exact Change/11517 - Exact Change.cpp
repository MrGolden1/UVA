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
#define infinite 2147483647

int coin[1100];
int dp[30001];
int mx;
int price;

int f(int n)
{
    dp[0] = 0;
    for (int i = 1; i < mx + 5; i++)
    {
        dp[i] = infinite;
    }
    for (int c = 0; c < n; c++)
    {
        for (int v = mx - coin[c] + 1; v >= 0; v--)
        {
            if (dp[v] != infinite)
            {
                dp[v + coin[c]] = (dp[v + coin[c]] < dp[v] + 1) ? dp[v + coin[c]] : dp[v] + 1;
            }
        }
    }
    while (true)
    {
        if (price > mx)
        {
            return 0;
        }
        if (dp[price] != infinite )
        {
            return dp[price];
        }
        price++;
    }
    return 0;
}

int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    int m;
    int changes;
    while (t--)
    {
        cin >> price;
        cin >> m;
        mx = infinite;
        for (int i = 0; i < m; i++)
        {
            cin >> coin[i];
            if (coin[i] < mx && coin[i] >= price)
            {
                mx = coin[i];
            }
        }
        if (mx == infinite)
        {
            mx = price * 2;
        }
        changes = f(m);
        if (changes)
            cout << price << ' ' << changes << endl;
    }
    return 0;
}