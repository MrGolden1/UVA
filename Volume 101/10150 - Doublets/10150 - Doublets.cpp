#include <iostream>
#include <string>
#include <string.h>
#include <algorithm>
#include <stdio.h>
#include <map>
#include <stack>
#include <queue>

using namespace std;

struct Node
{
    string s;
    int ascii;
    vector <int> adj;
};

int asciiSum(string str)
{
    int sum = 0;
    for (int i = 0; str[i]  ; i++)
    {
        sum += str[i];
    }
    return sum;
}

bool areAdj(string a, string b)
{
    int d = 0;
    for (int i = 0; i < a[i]; i++)
    {
        if (a[i] != b[i])
            d++;
        if (d > 1)
            return false;
    }
    if (d == 0)
        return false;
    return true;
}

bool comp(Node a, Node b)
{
    if (a.s.size() == b.s.size())
    {
        int asca = asciiSum(a.s);
        int ascb = asciiSum(b.s);
        if (asca == ascb)
        {
            return a.s < b.s;
        }
        return asca < ascb;
    }
    return a.s.size() < b.s.size();
}

vector<Node> s;
string start, endi;
bool visited[30000];

int search(string a)
{
    int l = 0 , h = s.size() -1, m;
    int asc = asciiSum(a);
    while (l <= h)
    {
        m = (l + h) / 2;
        if (s[m].s == a)
        {
            return m;
        }
        if (asc == s[m].ascii)
        {
            if (s[m].s < a)
                l = m + 1;
            else
                h = m - 1;
        }
        else
        {
            if (asc < s[m].ascii)
                h = m - 1;
            else
                l = m + 1;
        }
    }
    return -1;
}

int father[30000];

int bfs(int cur)
{
    queue <int> q;
    father[cur] = -1;
    q.push(cur);
    visited[cur] = true;
    while (!q.empty())
    {
        int front = q.front();
        q.pop();
        visited[front] = true;
        if (s[front].s == endi)
        {
            return front;
        }
        for (int i = 0; i < s[front].adj.size(); i++)
        {
            if (!visited[s[front].adj[i]])
            {
                visited[s[front].adj[i]] = true;
                q.push(s[front].adj[i]);
                father[s[front].adj[i]] = front;
            }
        }
    }
    return -1;
}
int main()
{
    bool flag = false;
    string buf;
    while (getline(cin , buf) && buf != "")
    {
        s.push_back(Node{ buf , asciiSum(buf) });
    }
    sort(s.begin(), s.end(), comp);
    
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (s[i].s.size() != s[j].s.size() || s[j].ascii - s[i].ascii > 26)
            {
                break;
            }
            if (areAdj(s[i].s , s[j].s))
            {
                s[i].adj.push_back(j);
                s[j].adj.push_back(i);
            }
        }
    }
    while (cin >> start >> endi)
    {
        if (flag)
        {
            cout << endl;
        }
        flag = true;
        memset(visited, false, sizeof(visited));
        if (start.size() != endi.size())
        {
            cout << "No solution." << endl;
            continue;
        }
        int cur = search(start);
        int sol = bfs(cur);
        if (sol == -1)
            cout << "No solution." << endl;
        else
        {
            vector <string> ans;
            while (sol != -1)
            {
                ans.push_back(s[sol].s);
                sol = father[sol];
            }
            for (int i = ans.size() -1; i > -1; i--)
            {
                cout << ans[i] << endl;
            }
        }
    }
    return 0;
}