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

int s1, s2;
int x[2005];
int dp[2005];
int n;
int p;
int N;


int main() {

    while (scanf("%d%d%d%d", &n, &p ,&s1 ,&s2) == 4)
    {
        for (int i = 1; i <= n; i++)
        {
            scanf("%d",&x[i]);
        }
        int minimum = p * 10;
        for (int k = n; k >= 1; k--)
        {
            //for (int i = 0; i < n; i++)
            //{
            //  cout << setw(5) << x[i + 1];
            //}
            //cout << endl;
            for (int i = 0; i < n + 3; i++)
                dp[i] = 0;
            int mins = min(s1, s2);
            for (int i = 1; i <= n; i++)
            {
                dp[i] = dp[i - 1] + mins;
                int d1 = -1;
                int d2 = -1;
                for (int j = i - 1; j > 0; j--)
                {
                    if (x[i] - x[j] <= s1)
                    {
                        d1 = j;
                    }
                    if (x[i] - x[j] <= s2)
                    {
                        d2 = j;
                    }
                }
                if (d1 != -1)
                {
                    dp[i] = min(dp[i], dp[d1 - 1] + s1);
                }
                if (d2 != -1)
                {
                    dp[i] = min(dp[i], dp[d2 - 1] + s2);
                }
            }
            if (dp[n] < minimum)
                minimum = dp[n];
            int buf = x[n];
            int dif = p - x[n];
            for (int i = n; i > 1; i--)
            {
                x[i] = (x[i - 1] + dif);
            }
            x[1] = 0;
            //cout << "      " << dp[n] << endl;
        }
        cout << minimum << endl;
    }
    return 0;
}
