#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        int *x;
        int sum = 0;
        cin >> n;
        x = new int[n];
        for (int j = 0; j < n; j++)
        {
            cin >> x[j];
            int counter = 0;
            for (int k = 0; k < j; k++)
            {
                if (x[j] >= x[k])
                    counter++;
            }
            sum = sum + counter;
        }
        cout << sum << endl;
        delete[] x;
    }
    return 0;
}