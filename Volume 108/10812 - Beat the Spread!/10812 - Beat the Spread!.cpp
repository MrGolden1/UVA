#include<iostream>
using namespace std;
int main()
{
    long long s, d;
    int t;
    cin >> t;
    for (size_t i = 0; i < t; i++)
    {
        long long a, b;
        cin >> s >> d;
        if ((s % 2 == 1 && d % 2 == 0) || (s % 2 == 0 && d % 2 == 1))
            cout << "impossible" << endl;
        else
        {
            a = (s + d) / 2;
            b = a - d;
            if (b < 0 || a < 0)
                cout << "impossible" << endl;
            else cout << a << ' ' << b << endl;
        }
    }
    return 0;
}