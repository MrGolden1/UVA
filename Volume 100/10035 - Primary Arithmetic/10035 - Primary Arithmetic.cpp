#include<iostream>
using namespace std;
int main()
{
    int a, b;
    int carry, carry_counter, buf;
    cin >> a >> b;
    do
    {
        carry = 0;
        carry_counter = 0;
        while (a != 0 || b != 0)
        {
            buf = ((a % 10) + (b % 10) + carry);
            if (buf > 9)
            {
                carry = 1;
                carry_counter++;
            }
            else carry = 0;
            a = a / 10;
            b = b / 10;
        }
        if (carry_counter == 0)
            cout << "No carry operation." << endl;
        else if (carry_counter == 1)
            cout << carry_counter << " carry operation." << endl;
        else cout << carry_counter << " carry operations." << endl;
        cin >> a >> b;
    } while (a != 0 || b != 0);
    return 0;
}