// हर हर महादेव
#define F first
#define S second
#define dbl double
using namespace std;
#define pb push_back
#define vin(name, size)        \
    for (i = 0; i < size; i++) \
    cin >> name[i]
#define vout(name)                    \
    for (i = 0; i < name.size(); i++) \
        cout << name[i] << " ";       \
    cout << endl
#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define Pi 3.1415926535897932384626
#define part(x, a, b) x.begin() + a, x.begin() + b
#define deb(v) cout << #v << " " << v << "\n"
#define deb2(v, k) cout << #v << " " << v << "\n" \
                        << #k << " " << k << "\n"
ll power(ll a, ll b)
{
    ll res = 1;
    for (ll i = 1; i <= b; i++)
        res *= a;
    return res;
}
void HHM()
{
    ll i, j, k;
    ll n;
    cin >> n;
    vector<ll> v(n, 0);
    vin(v, n);
    vector<vector<ll>> r;
    ll tmp = 0;
    vector<ll> p;
    for (i = 0; i < n; i++)
    {
        tmp += v[i];
        if (tmp < 0)
        {
            r.pb(p);
            tmp = 0;
            vector<ll> h;
            p = h;
            // p.clear();
            continue;
        }
        p.pb(v[i]);
        // vout(p);
        if (i == (n - 1) && tmp >= 0)
        {
            r.pb(p);
        }
    }
    ll res = 0, m, m1;
    for (auto x : r)
    {
        m1 = 0;
        m = x.size();
        ll tmp=0;
        for (i = 0; i < x.size(); i++)
        {
            if (x[i] < 0)
            {
                m -= (tmp + 1);
                m1 = 0;
                tmp=0;
                continue;
            }
            res += ((m1 + 1) * (m)*x[i]);
            m1++, m--;
            tmp++;    
        }
        // vout(x);
    }
    cout << res << "\n";

    return;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    ll t = 1;
    cin >> t;
    for (ll i = 1; i <= t; i++)
    {
        cout << "Case #" << i << ": ";
        HHM();
    }
}
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
