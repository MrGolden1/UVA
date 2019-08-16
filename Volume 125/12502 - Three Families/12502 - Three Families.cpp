#include<iostream>
using namespace std;
int main()
{
    double t, a, b, z;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b >> z;
        if (b == a)
            cout << int(z / 2) << endl;
        else
        {
            int x = (((3 * a) - ((a + b)))* z / (((a + b) / 3) * 3));
            if (x < 0)
                cout << 0 << endl;
            else cout << x << endl;
        }
    }
    return 0;
}