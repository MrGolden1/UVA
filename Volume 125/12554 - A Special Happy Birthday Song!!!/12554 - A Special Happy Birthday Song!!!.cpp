#include<iostream>
#include<string>
#include<math.h>
using namespace std;
struct person
{
    string name;
};
struct song
{
    string str;
};
int main()
{
    song s[16] = { "Happy", "birthday", "to", "you", "Happy", "birthday", "to", "you", "Happy", "birthday", "to", "Rujia", "Happy", "birthday", "to", "you" };
    int n;
    cin >> n;
    person *x;
    x = new person[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> x[i].name;
    }
    int times;
    times = ceil(float(n) / 16);
    int k = 0;
    for (size_t i = 0; i < times; i++)
    {
        for (size_t j = 0; j < 16; j++)
        {
            cout << x[k].name << ": " << s[j].str << endl;
            k++;
            if (k == n)
                k = 0;
        }
    }
    return 0;
}