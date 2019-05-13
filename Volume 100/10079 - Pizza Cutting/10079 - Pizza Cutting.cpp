#include<iostream>
#include<string>
#include <algorithm>
#include <vector>
#include <queue>
#include <sstream>
#include <map>
using namespace std;
int main()
{
    long long n;
    while (cin >> n && n > -1)
    {
        cout << n * (n + 1) / 2 + 1 << endl;
    }
    return 0;
}