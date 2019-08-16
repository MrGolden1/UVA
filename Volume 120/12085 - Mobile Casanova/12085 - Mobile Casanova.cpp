#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    int *x;
    int counter = 1;
    while (cin >> n)
    {
        if (n == 0)
            break;
        x = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> x[i];
        }
        int current;
        current = x[0];
        cout << "Case " << counter << ":" << endl;
        for (int  i = 1 ; i <= n; i++)
        {
            if (x[i - 1] + 1 != x[i] || i == n)
            {
                cout << '0' << current;
                if (x[i - 1] - current != 0)
                {
                    int dig = 1;
                    int buf = x[i - 1];
                    while (buf != current)
                    {
                        buf = buf / 10;
                        current = current / 10;
                        dig*=10;
                    }
                    cout << '-' << x[i - 1] % dig;
                }
                cout << endl;
                current = x[i];
            }
        }
        delete [] x;
        cout << endl;
        counter++;
    }
    return 0;
}