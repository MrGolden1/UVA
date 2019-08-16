#include <iostream>
#include <string>
using namespace std;
int calaculateCola(int newCola , int usedCola)
{
    int total = newCola + usedCola;
    if (total < 3)
    {
        return newCola;
    }
    return newCola + calaculateCola(total / 3, total % 3);
}
int main()
{
    int n;
    while (cin >> n)
    {
        cout << calaculateCola(n, 1) << endl;
    }
    return 0;
}