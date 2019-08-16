#include <iostream>
using namespace std ;
int g(int num);
int main()
{
    int num[100];
    int j=0;
    for (; num[j-1]!=0 ; j++)
    cin >> num[j] ;
    for (int i = 0; i < j ; i++)
    {

        while ((num[i])/10 != 0)
        {
            num[i]=g(num[i]);
        }
        if (num[i] != 0 )
        {
            cout << num[i] ;
            //if ( i<j-2)//
                cout << endl ;
        }
        }
    return 0;
}
int g(int num )
{
    if (num == 0)
        return 0 ;
    return ((num%10)+g(num/10));
}