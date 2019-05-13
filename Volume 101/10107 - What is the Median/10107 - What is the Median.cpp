#include<string>
#include <algorithm>
#include <vector>
#include <queue>
#include <sstream>
#include <map>
#include<iostream> 
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    long long x[10001];
    int n = 0;
    int t;
    while (cin >> t)
    {
        x[n++] = t;
        sort(x, x + n );
        if (n % 2)
        {
            cout << x[(n - 1) / 2] << endl;
        }
        else cout << (x[(n - 1) / 2 ] + x[((n - 1) / 2) + 1 ]) / 2 << endl;
    }
    return 0;
}