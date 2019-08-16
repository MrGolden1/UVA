#include<iostream>
#include<string>
#include<map>
#include<iterator>
#include<math.h>
using namespace std;
int main()
{
    map <string, int> species;
    int t;
    float percantage;
    cin >> t;
    cin.ignore();
    string str;
    string buf;
    getline(cin, buf);
    cout.precision(4);
    for (size_t i = 0; i < t; i++)
    {
        int tedad = 0;
        while (getline(cin, str))
        {
            if (str == "")
                break;
            species[str]++;
            tedad++;
        }
        map <string, int>::iterator it = species.begin();
        while (it != species.end())
        {
            cout << it->first << " ";
            percantage = (float)it->second * 100 / tedad;
            cout << fixed << percantage << endl;
            it++;
        }
        if (!cin.eof())
            cout << endl;
        species.clear();
    }
    return 0;
}