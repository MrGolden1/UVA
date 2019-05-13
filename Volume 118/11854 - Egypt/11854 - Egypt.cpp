#include<iostream>
#include<string>

using namespace std;
bool check(int a , int b , int c)
{
    if(a*a + b*b == c*c)
        return true;
    if(a*a == b*b + c*c)
        return true;
    if(a*a + c*c == b*b )
        return true;
    return false;
}
int main()
{
    int a,b,c;
    while(cin >> a >> b >> c && a && b && c)
    {
        if(check(a,b,c))
            cout << "right" <<endl;
        else cout << "wrong" << endl;
    }
    return 0;
}