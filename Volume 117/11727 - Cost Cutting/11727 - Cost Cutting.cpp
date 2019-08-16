#include <iostream>
using namespace std;
int main()
{
    int T ;
    unsigned int sal[100];
    cin >> T;
    T=T*3 ;
    for (int i = 0; i < T; i=i+3)
    {
        cin >> sal[i] >> sal[i+1] >> sal[i+2] ;
    }
    for (int i = 0 , l=1 ; i < T ; i=i+3 , l++ )
    {
        for (int j = i; j <i+3 ; j++)
        {
            int max=j ;
            for (int k =j ; k < i+3 ; k++)
            {
                if (sal[k] > sal[max])
                    max=k ;
            }
            unsigned int buf = sal[j] ;
            sal[j] = sal[max] ;
                sal[max] = buf;
        }
        cout << "Case " << l << ": " << sal[i+1] << endl ;
    }
    return 0;
}