#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void reverseStr(string &str)
{
    int n = str.length();

    // Swap character starting from two
    // corners
    for (int i = 0; i<n / 2; i++)
        swap(str[i], str[n - i - 1]);
}
int main()
{
    string str1;
    while (getline(cin,str1))
    {
        bool mirror = false;
        bool palindrome = false;
        string str2 = str1;
        reverseStr(str2);
        if (str1 == str2)
            palindrome = true;
        for (size_t i = 0; str2[i]; i++)
        {
            if (str2[i] == 'E')
                str2[i] = '3';
            else if (str2[i] == 'J')
                str2[i] = 'L';
            else if (str2[i] == 'L')
                str2[i] = 'J';
            else if (str2[i] == 'S')
                str2[i] = '2';
            else if (str2[i] == 'Z')
                str2[i] = '5';
            else if (str2[i] == '2')
                str2[i] = 'S';
            else if (str2[i] == '3')
                str2[i] = 'E';
            else if (str2[i] == '5')
                str2[i] = 'Z';
            else if (str2[i] == 'A')
                str2[i] = 'A';
            else if (str2[i] == 'H')
                str2[i] = 'H';
            else if (str2[i] == 'I')
                str2[i] = 'I';
            else if (str2[i] == 'M')
                str2[i] = 'M';
            else if (str2[i] == 'O')
                str2[i] = 'O';
            else if (str2[i] == 'T')
                str2[i] = 'T';
            else if (str2[i] == 'U')
                str2[i] = 'U';
            else if (str2[i] == 'V')
                str2[i] = 'V';
            else if (str2[i] == 'W')
                str2[i] = 'W';
            else if (str2[i] == 'X')
                str2[i] = 'X';
            else if (str2[i] == 'Y')
                str2[i] = 'Y';
            else if (str2[i] == '1')
                str2[i] = '1';
            else if (str2[i] == '8')
                str2[i] = '8';
            else str2[i] = 0;
        }
        if (str1 == str2)
            mirror = true;
        if (mirror && palindrome)
            cout << str1 << " -- is a mirrored palindrome." << endl;
        else if (!mirror && palindrome)
            cout << str1 << " -- is a regular palindrome." << endl;
        else if (mirror && !palindrome)
            cout << str1 << " -- is a mirrored string." << endl;
        else cout << str1 << " -- is not a palindrome." << endl;
        if (!cin.eof())
            cout << endl;
    }
    return 0;
}