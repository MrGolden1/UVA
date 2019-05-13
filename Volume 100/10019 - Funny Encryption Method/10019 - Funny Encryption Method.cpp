#include<string>
#include <algorithm>
#include <vector>
#include <queue>
#include <sstream>
#include <map>
#include<iostream> 
#include <iomanip>

using namespace std;
int oneCounterInBinary(int n)
{
    if (n == 0)
        return 0;
    return n % 2 + oneCounterInBinary(n / 2);
}
int main()
{
    ios::sync_with_stdio(false);
    int t;
    int n;
    cin >> t;
    int numberOfOneInAdigit[10];
    for (int i = 0; i < 10; i++)
    {
        numberOfOneInAdigit[i] = oneCounterInBinary(i);
    }
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        cout << oneCounterInBinary(n) << " ";
        int b2 = 0;
        while (n != 0)
        {
            b2 += numberOfOneInAdigit[n % 10];
            n /= 10;
        }
        cout << b2 << endl;
    }
    return 0;
}