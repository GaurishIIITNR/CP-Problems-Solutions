#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
    cin >> t;

    while (t--)
    {

        ll a;
        cin >> a;
        set<ll> x;
        set<ll> y;
        for (ll i = 0; i < a; i++)
        {
            ll b, c;
            cin >> b >> c;
            x.insert(b);
            y.insert(c);
        }
        cout << (x.size() + y.size()) << "\n";
    }
}
