#include<iostream>
using namespace std;
int main()
{
    int t, n, x, max;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        max = 0;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            cin >> x;
            if (x > max)
                max = x;
        }
        cout << "Case " << i + 1 << ": " << max << endl;
    }
    return 0;
}