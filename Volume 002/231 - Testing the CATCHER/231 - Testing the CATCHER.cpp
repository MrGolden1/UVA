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
#define md 1000000007


int main()
{
    ios::sync_with_stdio(false);
    int t = 1;
    int a;
    while (true)
    {
        vector < int > v;
        cin >> a;
        if (a == -1)
            return 0;
        v.push_back(a);
        while (true)
        {
            cin >> a;
            if (a == -1)
                break;
            v.push_back(a);
        }
        int n = v.size();
        vector <int> dp(n, 1);
        int maxi = 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (v[i] <= v[j])
                    dp[i] = max(dp[j] + 1, dp[i]);
            }
            maxi = max(dp[i], maxi);
        }
        if (t != 1)
            cout << "" + '\n';
        printf("Test #%d:\n", t);
        printf("  maximum possible interceptions: %d\n", maxi);
        t++;
    }

    return 0;
}