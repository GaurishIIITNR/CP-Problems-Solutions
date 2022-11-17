#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t = 1;
    cin >> t;
    while (t--)
    {
        ll nn,kk;
        cin >> nn >> kk;
        ll cc = 0;
        for (ll i = 0; i < nn; i++)
        {
            ll dd;
            cin >> dd;
            if (dd == 1)
                cc++;
        }
        if (cc == 0)
        {
            cout << "NO\n";
            continue;
        }
        if (kk <= nn)
        {
            cout << "YES\n";
            continue;
        }
        if (nn == cc)
        {
            cout << "YES\n";
            continue;
        }
        cout << "NO\n";
    }
}

