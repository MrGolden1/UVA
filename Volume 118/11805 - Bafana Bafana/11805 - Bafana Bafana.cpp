#include <iostream>
using namespace std;
int main()
{
    int t;
    int n, k, p , x;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> k >> p;
        x = ((p%n) + k);
        if(n==x)
            cout << "Case " << i + 1 << ": " << n << endl;
        else if(x<n)
        cout << "Case " << i + 1 << ": " << x << endl;
        else cout << "Case " << i + 1 << ": " << x-n << endl;
    }
    return 0;
}