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
    map<ll, ll> mp;
    for (i = 0; i < n; i++)
    {
        ll d;
        cin >> d;
        mp[d]++;
        v[i] = d;
    }
    ll res1 = INT_MAX, res2 = INT_MAX;
    set<ll> st(v.begin(), v.end());
    vector<ll> vp(st.begin(), st.end());
    // vout(vp);
    sort(all(vp));
    if (vp.size() == 1)
    {
        cout << 0 << "\n";
        return;
    }
    if (vp.size() == 2)
    {

        cout << ((vp[1] - vp[0]) * 2) << "\n";
        return;
    }
    res1 = vp[1] - vp[0] + (vp[vp.size() - 1] - vp[0]);
    res2 = vp[vp.size() - 1] - vp[0] + (vp[vp.size() - 1] - vp[vp.size() - 2]);
    cout << max(res1, res2) << "\n";

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