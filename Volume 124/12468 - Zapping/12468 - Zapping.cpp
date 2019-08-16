#include<iostream>
using namespace std;
int main()
{
    int a, b, buf;
    cin >> a >> b;
    do
    {
        if (a>b)
        {
            buf = a;
            a = b;
            b = buf;
        }
        if (b - a > 50)
            cout << 99 - b + a + 1 << endl;
        else cout << b - a << endl;
        cin >> a >> b;
    } while (a!=-1);
    return 0;
}