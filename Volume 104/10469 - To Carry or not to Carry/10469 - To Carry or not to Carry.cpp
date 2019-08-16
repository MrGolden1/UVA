#include <iostream>
using namespace std ;
int main()
{
    unsigned int a , b ;
    while (cin >> a >> b)
    {
        cout << ((~a|~b)&(a|b)) << endl ;
    }
    return 0 ;
}
