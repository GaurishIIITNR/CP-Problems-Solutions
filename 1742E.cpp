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
    cin >> n >> k;
    vector<ll> sm, tmp;
    ll c = 0, mx = INT_MIN;
    for (i = 0; i < n; i++)
    {
        ll d;
        cin >> d;
        c += d;
        sm.pb(c);
        mx = max(mx, d);
        tmp.pb(mx);
    }
    while (k--)
    {
        ll d;
        cin >> d;
        ll lo = 0, hi = n - 1;
        while (lo < hi)
        {
            ll mi = lo + (hi - lo) / 2;
            if (tmp[mi] <= d)
                lo = mi + 1;
            else
                hi = mi;
        }
        if(tmp[0]>d)cout<<0<<" ";
        else if(tmp[n-1]<=d)cout<<sm[n-1]<<" ";
        else cout<<sm[lo-1]<<" ";
        // cout<<lo<<"\n";
        // if (lo == 0)
        //     cout << 0 << " ";
        // else if (lo >= n - 1 && tmp[lo] <= d)
        //     cout << sm[lo] << " ";
        // else
        //     cout << sm[lo - 1] << " ";
    }
    cout << "\n";
    return;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    ll t = 1;
    cin >> t;
    for (ll i = 1; i <= t; i++)
    {
        // cout << "Case #" << t << ": ";
        HHM();
    }
}
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
