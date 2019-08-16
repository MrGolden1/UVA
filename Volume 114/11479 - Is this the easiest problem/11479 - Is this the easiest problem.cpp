#include <iostream>
using namespace std ;
int main()
{
    long long int t , a, b , c ;
    cin >> t ;
    for (int i = 0; i < t ; i++)
    {
        cin >> a >> b >> c ;
        bool flag = false ;
        if ( a+b > c && a+c > b && b+c > a )
            flag = true ;
        if ( flag == true )
        {
            if ( a == b && a == c && b == c )
                cout << "Case " << i+1 << ": Equilateral" << endl ;
            else if ( a != b && a != c && b != c )
                cout << "Case " << i+1 << ": Scalene" << endl;
            else cout << "Case " << i+1 << ": Isosceles" << endl;
        }
        else cout << "Case " << i+1 << ": Invalid" << endl ;
    }
    return 0 ;
}