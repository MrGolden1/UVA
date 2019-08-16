#include <iostream>
#include "string"
using namespace std;
int main ()
{
    int n , donate;
    cin >> n;
    cin.ignore();
    string str ;
    int balance = 0 ;
    for (int  i = 0;  i < n;  i++)
    {
        cin >> str ;
        if ( str == "donate" )
        {
            cin >> donate ;
            cin.ignore();
            balance = balance + donate ;
        }
        else cout << balance << endl ;
    }
        return 0 ;
}