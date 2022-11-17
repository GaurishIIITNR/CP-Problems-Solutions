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
    vector<ll> v;
    vector<ll> p;
    ll gcd;
    ll mx = n;
    for (i = 0; i < n; i++)
    {
        ll d;
        cin >> d;
        v.pb(d);
        p.pb(__gcd((i + 1), d));
        // if (__gcd(i + 1, d) == 1)
        //     mx = min(mx, n - i);
    }
    gcd = v[0];
    for (auto x : v)
    {
        gcd = __gcd(x, gcd);
    }
    if (gcd == 1)
    {
        cout << 0 << "\n";
        return;
    }
    for (i = 0; i < n; i++)
    {
        if (gcd % p[i] != 0 || p[i] == 1)
        {
            mx = min(mx, n - i);
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = (i + 1); j < n; j++)
        {
            if (gcd % (__gcd(p[i], p[j])) || (__gcd(p[i], p[j])) == 1)
            {
                mx = min(mx, (n - j + n - i));
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = (i + 1); j < n; j++)
        {
            for (k = j + 1; k < n; k++)
            {
                ll d = __gcd(p[i], p[j]);
                d = __gcd(d, p[k]);
                if (gcd % (d) || d == 1)
                {
                    mx = min(mx, (n - j + n - i + n - k));
                }
            }
        }
    }
    // }for (i = 0; i<n; i++)
    // {
    //     for (j=i+1;j<n;j++)
    //     {
    //         if (gcd % __gcd(p[i], p[j]))
    //         {
    //             mx = min(mx, (n - j + n - i));
    //         }
    //     }
    // }
    cout << mx << "\n";
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
