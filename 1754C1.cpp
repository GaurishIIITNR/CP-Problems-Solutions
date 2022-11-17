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
    ll sm = 0;
    for (i = 0; i < n; i++)
    {
        ll d;
        cin >> d;
        if (i % 2 == 0)
            sm += d;
        else
            sm -= d;
        v[i] = d;
    }
    ll r = abs(sm);
    if (r % 2)
    {
        cout << -1 << "\n";
        return;
    } // deb(sm);
    vector<pair<ll, ll>> res;
    ll in = 1, p = (r / 2);
    ll smm = 0, cnt = 0;
    for (i = 0; i < n; i++)
    {
        if (cnt % 2 == 0)
            smm += v[i];
        else
            smm -= v[i];
        if (p > 0 && ((smm == -1 && sm < 0) || (smm == 1 && sm > 0)))
        {
            res.pb({in, i + 1});
            in = i + 2;
            p--;
            cnt = 0;
            smm = 0;
        }
        cnt++;
    }
    if (in <= n)
    {
        res.pb({in, n});
    }
    ll ch = 0;
    for (auto x : res)
    {
        ll tmp = 0, cn = 0;
        for (ll i = x.F - 1; i < x.S; i++)
        {
            if (cn % 2 == 0)
                tmp += v[i];
            else
                tmp -= v[i];
            cn++;
        }
        ch += tmp;
    }
    if (ch != 0)
    {
        cout << -1 << "\n";
        return;
    }
    cout << res.size() << "\n";
    for (auto x : res)
    {
        cout << x.F << " " << x.S << "\n";
    }

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
