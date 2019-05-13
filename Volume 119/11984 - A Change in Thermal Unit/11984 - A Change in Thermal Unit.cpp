#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
//#include  <bitset>
//#include <Windows.h>
//#include <thread>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        float tem;
        float increase;
        cin >> tem >> increase;
        tem = (tem * 9 / 5);
        cout.precision(2);
        cout << "Case " << i + 1 << ": " << fixed << (increase + tem) * 5 / 9.0 << endl;
    }
    return 0;
}