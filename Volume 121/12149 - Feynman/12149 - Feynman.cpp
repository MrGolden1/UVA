#include <iostream>
#include<math.h>
using namespace std;
int get_squares(int x , int i)
{
    if (i == 0)
        return 0;
    return (pow((x - i),2)) + get_squares(x, i - 1);
}
int main()
{
    int x;
    cin >> x;
    do
    {
        cout << get_squares(x+1, x+1) << endl;
        cin >> x;
    } while (x!=0);
    return 0;
}