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
    string s;
    cin >> s;
    vector<ll> v;
    v.pb(0);
    for (i = 0; i < n; i++)
    {
        ll d;
        cin >> d;
        v.pb(d);
    }
    v.pb(0);
    vector<pair<ll, vector<ll>>> res;
    vector<ll> tmp;
    ll c = 0;
    for (i = 0; i < n + 1; i++)
    {
        if (s[i] == '1')
        {
            tmp.pb(v[i]);
            if (i > 0 && s[i - 1] == '1')
                c++;
        }
        else
        {
            if (i > 0 && s[i - 1] == '1')
            {
                c++;
                tmp.pb(v[i]);
            }
            res.pb({c, tmp});
            c = 0;
            tmp.clear();
        }
    }
    ll r = 0;
    for (auto &x : res)
    {
        sort(all(x.S));
        reverse(all(x.S));
        for (i = 0; i < x.F; i++)
        {
            r += x.S[i];
        }
    }
    cout << r << "\n";

    return;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    ll t = 1;
    cin >> t;
    for (ll i = 1; i <= t; i++)
    {
        // cout << "Case #" <<i<< ": ";
        HHM();
    }
}
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
