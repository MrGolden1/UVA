#include <iostream>
using namespace std ;
int main()
{
    unsigned long long int a , b , c;
    cin >> a >> b ;
    do
    {
        c=1;
        if ( a==b)
            cout << a << " things taken " << b << " at a time is " << c << " exactly." << endl ;
        else
        {
            int d = b ;
            if((a-b) > b ) 
                d = a-b ;
        for (unsigned long long  int i = a-d+1 , j = 1 ; i < a+1 ; i++ , j++)
            c=(c*i)/j;
        cout << a << " things taken " << b << " at a time is " << c << " exactly." << endl ;
        }
        cin >> a >> b;
    } while (a!=0);
    return 0 ;
}