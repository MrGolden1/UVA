#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
#include<cstring>
#include<math.h>
#include<cmath> 
#include<stack>
#include<queue>
#include<string.h>
#include<climits>

using namespace std;

int main()
{
    long long int n, t;
    while(cin >> n >> t)
    {
     bool a[1000000] = { false };
    for (int i = 0; i < t; i++)
    {
        int d;
        cin >> d;
        a[d] = true;
    }
    int ans = 0;
    bool sw = false;
    for (int i = 1; i <= n; i++)
    {
        if (!a[i])
        {
            cout << i  << " ";
            sw = true;
        }
    }
    if (!sw)
        cout << "*" << endl;
    else
        cout << endl;
    }
}