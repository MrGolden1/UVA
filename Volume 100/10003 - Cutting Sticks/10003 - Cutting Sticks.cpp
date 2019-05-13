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

using namespace std;

int n, l, C[52];
int min(int a, int b) { return (a < b) ? a : b; }

int BottomUp1(int ini, int fin)
{
    int DP[53][53];
    for (int i = 0; i <= fin; i++)
    {
        DP[i][i + 1] = 0;
    }
    for (int L = 2; L <= fin; L++)
    {
        for (int i = 0; i <= fin - L; i++)
        {
            int j = L + i;
            DP[i][j] = 2147483647;
            for (int k = i + 1; k < j; k++)
            {
                DP[i][j] = min(DP[i][j], DP[i][k] + DP[k][j] + C[j] - C[i]);
            }
        }
    }
    return DP[0][fin];
}
int main()
{
    int i, sol;

    while (1)
    {
        scanf("%d", &l);
        if (l == 0) break;
        scanf("%d", &n);
        C[0] = 0;
        for (i = 1; i <= n; i++)
            scanf("%d", &C[i]);
        C[n + 1] = l;
        sol = BottomUp1(0, n + 1);
        printf("The minimum cutting is %d.\n", sol);
    }
    return 0;
}