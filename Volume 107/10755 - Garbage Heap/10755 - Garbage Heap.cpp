#include <iostream>
#include <string>
#include <algorithm>
#include <stdio.h>
#include <map>
#include <stack>
#include <queue>

using namespace std;


long long arr[22][22][22];

long long kdane(int n , long long a[]) 
{
    long long max_so_far = 0;
    long long max_here = 0;
    long long max_ = -9223372036854775807;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max_)
            max_ = a[i];
        max_here = max_here + a[i];
        if (max_here < 0)
            max_here = 0;
        else if (max_here > max_so_far)
            max_so_far = max_here;
    }
    if (max_so_far == 0)
        return max_;
    return max_so_far;
}

int main() {
    //for (int i = 0; i < 20 * 20 * 20; i++)
    //{
    //  cout << 2147483647 << ' ';
    //}
    //cout << endl;
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    int a, b, c;
    long long temp[22];
    for (int q = 0; q < t; q++)
    {
        cin >> a >> b >> c;
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                for (int k = 0; k < c; k++)
                {
                    cin >> arr[i][j][k];
                }
            }
        }
        long long max = -9223372036854775807;
        for (int i = 0; i < a; i++)
        {
            for (int j = i; j < a; j++)
            {
                for (int k = 0; k < b; k++)
                {
                    for (int l = 0; l < c; l++)
                    {
                        temp[l] = 0;
                    }
                    for (int l = k; l < b; l++)
                    {
                        for (int m = 0; m < c; m++)
                        {
                            for (int n = i; n < j + 1; n++)
                            {
                                temp[m] += arr[n][l][m];
                            }
                        }

                        long long sum = kdane(c, temp);
                        if (sum > max)
                            max = sum;
                    }
                }
            }
        }
        cout << max << endl;
        if (q != t - 1)
            cout << endl;
    }
    return 0;
}