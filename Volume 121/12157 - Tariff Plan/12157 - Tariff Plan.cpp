#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t, n, m, j;
    double x;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        m = 0;
        j = 0;
        cin >> n;
        for (int k = 0; k < n; k++)
        {
            cin >> x;
            m = m + (ceil(x / 29.99) * 10);
            j = j + (ceil(x / 59.99) * 15);
        }
        cout << "Case " << i + 1 << ": ";
        if (j < m)
            cout << "Juice " << j << endl;
        else if (j == m)
            cout << "Mile Juice " << j << endl;
        else cout << "Mile " << m << endl;
    }
    return 0;
}