#include <iostream>
#include <stdio.h>
using namespace std ;
int main()
{
    unsigned long long int c;
    int a , b;
    scanf("%d %d",&a , &b );
    do
    {
        c=1;
        if ( a==b)
            cout << a << endl ;
        else if (b == 1)
        {
            cout << a << endl;
        }
        else
        {
            if ( b > (a / 2))
                b = a -b;
        for (int i = a-b+1 , j = 1 ; i < a+1 ; i++ , j++)
            c=(c*i)/j;
        printf("%llu\n", c);
        }
    scanf("%d %d",&a , &b );
    } while (a!=0);
    return 0 ;
}