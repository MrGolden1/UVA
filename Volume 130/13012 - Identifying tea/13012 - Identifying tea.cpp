#include<iostream>
#include<string>

using namespace std;

int main()
{
    int t;
    while(cin >> t)
    {
        int correct = 0;
        int buf;
        for (int i = 0; i < 5 ;i++)
        {
            cin >> buf;
            if(buf == t)
                correct++;
        }
        cout << correct <<endl;
    }
    return 0;
}