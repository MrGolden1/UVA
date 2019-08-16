#include<iostream>
#include<string>
#include<sstream>
using namespace std;
void reverseStr(string &str);
int charToInt(char _char);
int main()
{
    string line;
    string sum;
    for (size_t i = 0; i < 101; i++)
    {
        sum[i] = '0';
    }
    int carry = 0;
    int digit1, digit2;
    int digit_sum;
    getline(cin, line);
    do
    {
        reverseStr(line);
        for (size_t i = line.length() ; i < 101; i++)
        {
            line[i] = '0';
        }
        int i = 0;
        while (line[i] && carry != 1)
        {
            digit1 = charToInt(sum[i]);
            digit2 = charToInt(line[i]);
            digit_sum = digit1 + digit2 + carry;
            carry = 0;
            if (digit_sum < 10)
                sum[i] = digit_sum + 48;
            else
            {
                sum[i] = digit_sum - 10;
                carry = 1;
            }
        }
        getline(cin, line);
    } while (line[0]!='0');
    for (size_t i = 100 ; i >= 0; i++)
    {
        cout << sum[i];
    }
}
void reverseStr(string &str)
{
    int n = str.length();

    // Swap character starting from two
    // corners
    for (int i = 0; i<n / 2; i++)
        swap(str[i], str[n - i - 1]);
}
int charToInt(char _char)
{
    for (int i = 48, num = 0; i < 58; i++, num++)
        if ((int)_char == i)

            return num;
    return 0;
}