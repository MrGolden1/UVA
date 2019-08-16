#include <iostream>
#include <string>
using namespace std;
int main()
{
    string line;
    while (cin >> line)
    {
        for (int i = 0; line[i] ; i++)
        {
            line[i] = line[i] - 7;
        }
        cout << line << endl;
    }
    return 0;
}