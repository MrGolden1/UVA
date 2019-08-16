#include<iostream>
using namespace std;
unsigned int function(unsigned int x)
{
    if (x == 1)
        return 0;
    if (x % 2 == 0)
        return 1 + function(x / 2);
    else return 1 + function(3 * x + 1);
}
int main()
{
    unsigned int l, h, v, s;
    unsigned int a;
    cin >> l >> h;
    do
    {
        s = 0;
        if (l > h)
        {
            unsigned int buf = l;
            l = h;
            h = buf;
        }
        for (unsigned int i = l; i <= h; i++)
        {
            if (i == 1)
                a = 3;
            else a = function(i);
            if (a > s)
            {
                s = a;
                v = i;
            }
        }
        cout << "Between " << l << " and " << h << ", " << v << " generates the longest sequence of " << s << " values." << endl;
        cin >> l >> h;
    } while (l!=0);
    return 0;
}