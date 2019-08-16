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

int positive_sum(int a[80], int n)
{
    int max = -999999;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
            sum += a[i];
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    if (sum)
    {
        return sum;
    }
    else
    {
        return max;
    }
}

int main()
{
    int a[80][80];
    int transpos[80][80];
    int t;
    int n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
                transpos[j][i] = a[i][j];
            }
        }

        int temp[80];
        int temp2[80];
        int max_sum = -999999;
        int sum;
        for (int left = 0; left < n; left++)
        {
            for (int right = left; right < n; right++)
            {
                for (int up = 0; up < n; up++)
                {
                    for (int i = 0; i < right - left + 1; i++)
                    {
                        temp[i] = 0;
                        temp2[i] = 0;
                    }
                    for (int down = up; down < n; down++)
                    {
                        for (int l = left , f = 0; l < right + 1 ;f++ , l++)
                        {
                            temp[f] += a[down][l];
                            temp2[f] += transpos[down][l];
                        }
                        sum = max(positive_sum(temp, right - left + 1), positive_sum(temp2, right - left + 1));
                        //cout << sum << endl;
                        if (sum > max_sum)
                        {
                            max_sum = sum;
                        }
                    }
                }
            }
        }
        cout << max_sum << endl;
    }
    return 0;
}