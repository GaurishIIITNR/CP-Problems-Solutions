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
        vector<ll> v(2 * a);
        for (ll i = 0; i < 2 * a; i++)
        {
            ll b;
            cin >> b;
            v[b]+=1;
        }
        ll flag = 1;
        for (ll i = 0; i < 2 * a; i++)
        {
            if (v[i] == 0)
            {
                flag = 2;
                cout << "YES\n";
                break;
            }
            else if (v[i] == 1)
            {
                flag = 2;
                cout << "NO\n";
                break;
            }
        }
        if (flag == 1)
            cout << "YES\n";
    }
}
