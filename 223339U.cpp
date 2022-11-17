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
ll f(vector<ll> &v, vector<ll> w, ll i, ll mx)
{
    // Base
    if (i == v.size())
        return 0;
    // Recursive
    ll p1 = 0;
    if (mx - w[i] >= 0)
        p1 = v[i] + f(v, w, i + 1, mx - w[i]);
    ll p2 = f(v, w, i + 1, mx);
    return max(p1, p2);
}
void HHM()
{
    ll i, j, k;
    ll n, mx;
    cin >> n >> mx;
    vector<ll> v, w;
    for (i = 0; i < n; i++)
    {
        ll W, V;
        cin >> W >> V;
        w.pb(W);
        v.pb(V);
    }
    cout<<f(v,w,0,mx);
    return;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    ll t = 1;
    // cin >> t;
    for (ll i = 1; i <= t; i++)
    {
        // cout << "Case #" <<i<< ": ";
        HHM();
    }
}
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
