#include<iostream>
using namespace std;
int main()
{
    int a, b;
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b;
        if (a % 2 == 0)
            a++;
        int sum = 0;
        for (int j = a; j <= b; j = j + 2)
        {
            sum = sum + j;
        }
        cout << "Case " << i + 1 << ": " << sum << endl;
    }
    return 0;
}