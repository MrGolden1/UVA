#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int *x;
        int n;
        cin >> n;
        x = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> x[i];
        }
        sort(x, x + n);
        cout << "Case " << i+1 << ": " << x[(n / 2 )] << endl;
    }
    return 0;
}