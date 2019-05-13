#include<iostream>
#include<string>
#include <algorithm>
#include <vector>
#include <queue>
#include <sstream>
#include <map>
using namespace std;
int main()
{
    int n;
    string line;
    while (cin >> n && n)
    {
        cin >> line;
        n = line.size() / n;
        for (int i = 0; line[i] ; i = i + n )
        {
            reverse(&line[i], &line[i + n]);
        }
        cout << line << endl;
    }
    return 0;
}