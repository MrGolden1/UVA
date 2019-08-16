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



int main()
{
    int t;
    cin >> t;
    int a[102][102];
    int n, m, K;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> m >> K;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
                if (i)
                    a[i][j] += a[i - 1][j];
            }
        }
        int best_area = 0;
        int min_cost = 0;
        int temp_cost;
        for (int k = 0; k < n; k++)
        {
            for (int j = k; j < n; j++)
            {
                for (int l = 0; l < m; l++)
                {
                    if (k)
                    {
                        temp_cost = a[j][l] - a[k - 1][l];
                    }
                    else
                    {
                        temp_cost = a[j][l];
                    }

                    int pos = l + 1;
                    while (pos < m)
                    {
                        int buf;
                        if (k)
                        {
                            buf = a[j][pos] - a[k - 1][pos];
                        }
                        else
                        {
                            buf = a[j][pos];
                        }
                        if (buf + temp_cost > K)
                            break;
                        temp_cost += buf;
                        pos++;
                    }
                    if (temp_cost <= K)
                    {
                        int area = (j - k + 1) * (pos - l  );
                        if (area > best_area || ( area == best_area && temp_cost < min_cost))
                        {
                            best_area = area;
                            min_cost = temp_cost;
                        }
                    }
                }
            }
        }
        printf("Case #%d: %d %d\n", i + 1, best_area, min_cost);
    }
    return 0;
}