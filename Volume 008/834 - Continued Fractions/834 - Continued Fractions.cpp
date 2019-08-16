#include<iostream>
using namespace std;
int main()
{
    int a, b, r;
    while (cin >> a >> b)
    {
        cout << "[" << a / b;
        r = a % b;
        a = b;
        b = r;
        if (r != 0)
            cout << ";";
        while (a != 1 && r!=0)
        {
            cout << a / b;
            r = a % b;
            if (r == 0)
                break;
            a = b;
            b = r;
            if (a != 1)
                cout << ",";
        }
        cout << "]" << endl;
    }
    return 0;
}