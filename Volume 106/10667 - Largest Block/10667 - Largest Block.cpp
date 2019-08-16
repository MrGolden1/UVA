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
    int p ;
    cin >> p;
    int a[200][200];
    int temp[200];
    int n;
    int b;
    int r1 , c1 , r2 , c2 ;
    int sol;
    while (p--)
    {
        sol = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                a[i][j] = 1;
            }
            
        }
        
        cin >> b;
        while (b--)
        {
            cin >> r1 >> c1 >> r2 >> c2;
            r1--;
            c1--;
            r2--;
            c2--;
            for (int i = r1; i <= r2; i++)
            {
                for (int j = c1; j <= c2; j++)
                {
                    a[i][j] = -999999;
                }
            }
        }
        
        for (int left = 0; left < n; left++)
        {
            for (int i = 0; i < n; i++)
            {
                temp[i] = 0;
            }
            
            for (int right = left; right < n; right++)
            {
                for (int i = 0; i < n; i++)
                {
                    temp[i] += a[i][right];
                }
                
                sol = max(sol , kadane(temp , n));
            }
            
        }
        
        cout << sol << endl;
    }
    
    return 0;
}