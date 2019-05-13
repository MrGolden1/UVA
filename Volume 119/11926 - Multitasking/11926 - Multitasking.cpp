#include <bits/stdc++.h>
using namespace std;

bitset<1000001> tms;

int main()
{
    ios::sync_with_stdio(false);
    int n, m, s, e, inv;

    while (cin >> n >> m) {
        if (!n && !m)
            break;
        tms.reset();
        bool hasConf = false;
        for (size_t i = 0; i < n; i++) {
            cin >> s >> e;
            for (int k = s; !hasConf && k < e; k++) {
                if (tms.test(k)) {
                    hasConf = true;
                    break;
                }
                tms.set(k);
            }
        }
        for (int i = 0; i < m; i++) {
            cin >> s >> e >> inv;
            while(!hasConf && s <= 1000000) {
                for (int k = s; !hasConf && k < e; k++) {
                    if (tms.test(k)) {
                        hasConf = true;
                        break;
                    }
                    tms.set(k);
                }
                s += inv;
                e = e + inv > 1000000 ? 1000000 : e + inv;
            }
        }
        cout << (hasConf ? "CONFLICT" : "NO CONFLICT") << endl;
    }

    return 0;
}