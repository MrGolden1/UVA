#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <set>
#include <sstream>
#include <stdio.h>
#include <math.h>
#include <map>
#include <iomanip>

#define ever (;;)


using namespace std;

vector <int> p;
vector <int> rnk;


int findParent(int u)
{
    return (p[u] == -1) ? (u) : (findParent(p[u]));
}

bool isSame(int u, int v)
{
    return findParent(u) == findParent(v);
}

void unite(int u, int v)
{
    if (u = findParent(u) == (v = findParent(v)))
        return;
    if (rnk[u] < rnk[v])
    {
        p[u] = v;
    }
    else
    {
        p[v] = u;
        if (rnk[u] == rnk[v])
        {
            rnk[u]++;
        }
    }
}

int main()
{
    vector < pair<int, pair<int, int >>> edges;
    int n,m, a, b, c, sum = 0;
    pair<int, pair<int, int >> buf;
    while (cin >> m)
    {
        for (int i = 0; i < m; i++)
        {
            cin >> buf.second.first >> buf.second.second >> buf.first;
            sum += buf.first;
        }
        cout << sum << endl;
        sum = 0;
        cin >> m;
        for (int i = 0; i < m; i++)
        {
            cin >> buf.second.first >> buf.second.second >> buf.first;
            edges.push_back(buf);
        }
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> buf.second.first >> buf.second.second >> buf.first;
            edges.push_back(buf);
        }
        p.assign(n + m, -1);
        rnk.assign(n + m, 0);
        sort(edges.begin(), edges.end());
        for (auto s : edges)
        {
            if (! isSame(s.second.first,s.second.second))
            {
                unite(s.second.first, s.second.second);
                sum += s.first;
            }
        }
        cout << sum << endl << endl;
        cin >> m;
    }

}
