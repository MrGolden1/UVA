#include <iostream>
#include <math.h>
using namespace std ;
int main()
{
    int n , m , re ;
    bool prime ;
    while (cin>>n)
    {
        bool flag = true ;
        for (int i = 2; i <= sqrt(n); i++)
        {
            if(n%i ==0)
            { 
                flag = false ;
                break;
            }
        }
            if ( flag == true )
                prime = true ;
            else prime = false ;
            m = n ;
            re = 0 ;
            while (n!=0)
            {
                re = (re*10) + n%10 ;
                n=n/10;
            }
            if ( re == m )
                flag = false ;
            else {
            flag = true ;
            for (int i = 2; i <= sqrt(re); i++)
        {
            if(re%i ==0)
            { 
                flag = false ;
                break;
            }
        }
            }
    
            if ( prime == true && flag == true )
                cout << m << " is emirp." << endl ; 
            else if ( prime == true && flag == false )
                cout << m << " is prime." << endl ; 
            else cout << m << " is not prime." << endl ;     
    }
            return 0 ;
    
}