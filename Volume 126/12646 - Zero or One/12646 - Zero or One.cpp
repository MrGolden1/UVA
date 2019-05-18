#include <iostream>

using namespace std;

int main()
{
    int a, b ,c;
    while(cin >> a >> b >> c)
    {
        if( (a && !b && ! c) || ((!a && b &&c)))
            cout << 'A' <<  endl;
        else if ( (!a && b && !c) || ((a && !b && c)))
            cout << "B"  << endl;
        else if( (!a && !b &&  c) || ((a && b &&!c)))
            cout << "C" << endl;
        else cout << "*" << endl;
    }
    return 0;
}