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

bool flag[1100000];

int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    int d, l;
    int i;
    int number;
    while (t--)
    {
        cin >> d >> l;
        i = 1;
        number = pow(2, d);
        while (i < number)
        {
            if (l % 2 == 0)
            {
                i = (i * 2) + 1;
            }
            else
            {
                i *= 2;
            }
            l =max(int(ceil(float(l)/2)) , 1);
        }
        cout << i / 2 << endl;
    }
    return 0;
}