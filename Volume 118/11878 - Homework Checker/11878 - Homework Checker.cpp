#include<iostream>
#include<string>
using namespace std;
int main()
{
    string line;
    int a, b, c;
    int correct = 0;
    int location;
    while (getline(cin,line))
    {
        if (line.find('?') != string::npos) /// if ? found
        {
            continue;
        }
        if (line.find('+') != string::npos) /// if + found
        {
            location = line.find('+');
            a = stoi(line.substr(0, location));
            line.erase(0, location + 1);
            location = line.find('=');
            b = stoi(line.substr(0, location));
            line.erase(0, location + 1);
            c = stoi(line);
            cout << a << "   " << b << "   " << c << endl;
            if (a + b == c )
            {
                correct++;
            }
        }
        else  /// if - found
        {
            location = line.find('-');
            a = stoi(line.substr(0, location));
            line.erase(0, location + 1);
            location = line.find('=');
            b = stoi(line.substr(0, location));
            line.erase(0, location + 1);
            c = stoi(line);
            cout << a << "   " << b << "   " << c << endl;
            if (a - b == c)
            {
                correct++;
            }
        }
    }
    cout << correct;
    system("pause>n");
    return 0;
}