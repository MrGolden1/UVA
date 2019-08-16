#include <iostream>
using namespace std ;
int main()
{
    int n , t ;
    cin >> t ;
    for (int i = 0; i < t; i++)
    {
        cin >> n ;
        int a = ((((n*567)/9)+7492)*235/47)-498 ;
        if ( a < 0 )
            a = a *-1 ;
        cout << ((a%100)-(a%10))/10 << endl ;
    }
    return 0 ;
}