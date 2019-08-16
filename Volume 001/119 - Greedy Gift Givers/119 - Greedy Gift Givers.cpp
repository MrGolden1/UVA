#include<iostream>
#include<string>
#include<sstream>
using namespace std;
struct person
{
    string name;
    int receive = 0, spent = 0;
};
int find_person(string str , person *n , int t)
{
    for (int i = 0; i < t; i++)
    {
        if (n[i].name == str)
            return i;
    }
}
int main()
{
    int t;
    int l = 0;
    stringstream obj;
    while (cin>>t)
    {
        person *n;
        n = new person[t];
        for (int i = 0; i < t; i++)
        {
            cin >> n[i].name;
        }
        string giver, receiver;
        int gift, number, flag_giver, flag_receiver;
        for (int j = 0; j < t; j++)
        {
            cin >> giver;
            flag_giver = find_person(giver, n, t);
            cin >> gift;
            cin >> number;
            if (number != 0)
            {
                n[flag_giver].spent = n[flag_giver].spent + ((gift / number)*number);
                for (int i = 0; i < number; i++)
                {
                    cin >> receiver;
                    flag_receiver = find_person(receiver, n, t);
                    n[flag_receiver].receive = n[flag_receiver].receive + (gift / number);
                }
            }
        }
        for (int i = 0; i < t; i++)
        {
            obj << n[i].name << ' ';
            obj << n[i].receive - n[i].spent << endl;
            l++;
        }
        obj << endl;
        l++;
    }
    string str;
    for (int i = 0; i < l-1; i++)
    {
        getline(obj, str);
        cout << str << endl;
    }
}