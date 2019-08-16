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

int diff[100009];
int arr[100009];

int main()
{
    ios::sync_with_stdio(false);
    int p, y;
    int cur, last;
    int max, start, end;
    int sum;
    int i, j;
    while (cin >> y)
    {
        cin >> p;
        cin >> arr[0];
        for (i = 1; i < p ; i++)
        {
            cin >> arr[i];
            diff[i - 1] = arr[i] - arr[i - 1];
        }
        max = -1;
        for ( i = 0; i < p; i++)
        {
            sum = 0;
            j = i;
            while ( j < p)
            {
                if (sum + diff[j] < y && j  < p - 1)
                {
                    sum += diff[j++];
                }
                else break;
            }
            if (j - i + 1 > max)
            {
                max = j - i + 1;
                start = arr[i];
                end = arr[j];
            }
        }
        printf("%d %d %d\n", max, start, end);
    }
    return 0;
}