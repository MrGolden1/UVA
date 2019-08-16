#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    int x;
    string str;
    cin >> t;
    cin.ignore();
    cout << "Lumberjacks:" << endl;
    for (size_t i = 0; i < t; i++)
    {
            vector <int> Lumberjacks;
        /////////////// Getting inputs line by line
        getline(cin, str);
        stringstream line;
        line << str;
        while (!line.eof())
        {
            line >> x;
            Lumberjacks.push_back(x);
        }
        if (is_sorted(Lumberjacks.begin(), Lumberjacks.end()))
            cout << "Ordered" << endl;
        else {
            reverse(Lumberjacks.begin(), Lumberjacks.end());
            if (is_sorted(Lumberjacks.begin(), Lumberjacks.end()))
                cout << "Ordered" << endl;
            else cout << "Unordered" << endl;
        }
        line.clear();
        Lumberjacks.clear();
    }
    return 0;
}