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
    ll ev = 0, od = 0;
    vector<pair<ll, ll>> vp;
    for (i = n-1; i>=0; i--)
    {
        if (i % 2)
            od += v[n-i-1];
        else
            ev += v[n-i-1];
        vp.pb({ev, od});
    }
    reverse(all(v));
    reverse(all(vp));
    ll smv = 0, smp = 0;
    ll mn = INT_MAX, mx = INT_MIN;
    // for (i = 0; i < n; i++)
    // {
    //     if (i % 2)
    //         smv += v[i], mn = min(mn, v[i]);
    //     else
    //     {
    //         smp += v[i];
    //         if (i != 0)
    //             mx = max(mx, v[i]);
    //     }
    // }
    // deb2(mx, mn);
    for(i=0;i<n;i++){

    }

    if (mn < mx)
    {
        smv -= mn;
        smp -= mx;
        smv += mx;
        smp += mn;
    }
    if (smv == smp)
    {
        cout << "Tie " << smv << " " << smp << "\n";
        return;
    }
    if (smv > smp)
    {
        cout << "Vanthiyathevan " << smv << " " << smp << "\n";
        return;
    }
    cout << "Poonguzhali " << smv << " " << smp << "\n";
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
