#include<iostream>
#include<string>
#include<sstream>
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
    int t;
    cin >> t;
    cin.ignore();
    unsigned long long a, b;
    string c;
    string line;
    stringstream object;
    for (size_t i = 0; i < t; i++)
    {
        getline(cin, line);
        reverseStr(line);
        object << line;
        object >> a >> b;
        object.clear();
        object << a + b;
        object >> line;
        reverseStr(line);
        cout << line << endl;
        object.clear();
    }
    return 0;
}

////////// python
/*
t = int(input())
for i in range(0,t):
    arr = input().split(' ')
    a = int(arr[0])
    b = int(arr[1])
    Reverse_a = 0
    while(a > 0):
        Reminder = a %10
        Reverse_a = (Reverse_a *10) + Reminder
        a = a //10
    Reverse_b = 0
    while(b > 0):
        Reminder = b %10
        Reverse_b = (Reverse_b *10) + Reminder
        b = b //10
    c = Reverse_a+Reverse_b
    Reverse_c = 0
    while(c > 0):
        Reminder = c %10
        Reverse_c = (Reverse_c *10) + Reminder
        c = c //10
    print(Reverse_c)
    */