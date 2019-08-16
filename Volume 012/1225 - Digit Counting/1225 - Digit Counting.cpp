#include<iostream>
#include<sstream>
#include<string>
using namespace std;
int main()
{
    stringstream obj;
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        for (int k = 0; k < 10; k++)
        {
            for (int j = 1; j <= n; j++)
            {
                obj << j;
            }
            obj << '*';
            obj << endl;
        }
    }
    for (int i = 0; i < t; i++)
    {
        for (int i = 48; i <= 57; i++)
        {
        int tedad = 0;
        char digit;
        while (obj >> digit)
        {
            if (digit == '*')
                break;
            if (digit == i)
                tedad++;
        }
        cout << tedad;
        if (i < 57)
            cout << ' ';
        }
        cout << endl;
    }
    return 0;
}