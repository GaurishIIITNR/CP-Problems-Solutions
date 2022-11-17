// HHM
#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
int main()
{
    ll tests=1;
    //cin >> tests;
    while (tests--)
    {
        ll a, b;
        cin >> a >> b;
        vector<ll> c(a);
        ll same = 0;
        for (ll i = 0; i < a; i++)
            cin >> c[i];
        sort(c.begin(), c.end());
        reverse(c.begin(), c.end());
        for (ll i = 0; i < a; i++)
        {
            same += c[i];
            c[i] = same;
        }
        for (ll i = 0; i < b; i++)
        {
            ll y, z;
            cin >> y >> z;
            if (y - 1 - z < 0)
                cout << c[y - 1] << "\n";
            else
                cout << c[y - 1] - (c[y - 1 - z]) << "\n";
        }
    }
}