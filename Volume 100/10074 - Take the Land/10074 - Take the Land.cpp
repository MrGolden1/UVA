#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <string.h>
#include <math.h>

using namespace std;

int kadane(int arr[] , int n)
{
    int max_so_far = 0;
    int max_here = 0;
    for (size_t i = 0; i < n; i++)
    {
        max_here += arr[i];
        if (max_here < 0)
        {
            max_here = 0;
        }
        else if (max_here > max_so_far)
        {
            max_so_far = max_here;
        }
    }
    return max_so_far;
}

int main()
{
    ios::sync_with_stdio(false);
    int m , n ;
    int a[200][200];
    int temp[200];
    int sol ;
    while (cin >> m >> n && m && n)
    {
        sol = 0;
        for (size_t i = 0; i < m; i++)
        {
            for (size_t j = 0; j < n; j++)
            {
                cin >> a[i][j];
                a[i][j] *= -100000;
                a[i][j] += 1;
            }
        }
        for (int left = 0; left < n; left++)
        {
            for (size_t i = 0; i < m; i++)
            {
                temp[i] = 0;
            }
            
            for (int right = left; right < n; right++)
            {
               // cout << endl << left << "------ >" << right << endl;
                for (size_t i = 0; i < m; i++)
                {
                    temp[i] += a[i][right];
                   // cout << temp[i] << " ";
                }
                sol = max(sol , kadane(temp , m));
            }
        }
        cout << sol << endl;
    }
    return 0;
}