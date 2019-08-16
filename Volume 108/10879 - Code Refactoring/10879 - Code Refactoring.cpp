#include<iostream>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    int k;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        cout << "Case #" << i + 1 << ": " << n;
        k = 0;
        for (int j = 2; j <= n/2 ; j++)
        {
            if (n%j==0)
            {
                cout << " = " << j << " * " << n / j;
                k++;
            }
            if (k == 2)
                break;
        }
        cout << endl;
    }
    return 0;
}