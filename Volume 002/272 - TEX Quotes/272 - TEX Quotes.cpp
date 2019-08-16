#include <iostream>
#include "string"
using namespace std ;
int main()
{
    string str ;
    int i , j=1 ;
    do {
    getline(cin,str);
    for (i = 0 ; str[i] ; i++ )
    {
        if (str[i] != '"' )
            cout << str[i] ;
        else 
            {
                if ( j=1 )
        {
            cout << "" ;
            j=-1*j;
        }
        else
            {
                cout << "''" ;
                j=-1*j;
            }
            }
    }
    cout << endl ;
    }while ( str[i] !=  );
    system("pause>n");
    return 0 ;
}