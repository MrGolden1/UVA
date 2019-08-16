#include <iostream>
#include "string"
using namespace std ;
int main()
{
    char str ;
    system("pause");
    while (!(cin).eof())
    {
        getline(cin , str );
        cout << str << endl ;
    }
    return 0 ;
}