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
    vector<ll> adj[n + 1];
    for (i = 0; i < n - 1; i++)
    {
        ll a, b;
        cin >> a >> b;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    vector<ll> res(n + 1, 0);
    // res.pb(1);
    vector<bool> vis(n, 0);
    ll dis = 0;
    for (i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            vector<ll> v;
            v.pb(i);
            vis[i] = 1;
            ll cnt = 1, p = 0, flag = 0;
            while (v.size())
            {
                ll node = v[0];
                res[node] = dis;
                v.erase(v.begin());
                cnt--;
                if (flag == 0)
                {
                    p += (adj[node].size());
                    flag = 1;
                }
                else
                    p += (adj[node].size() - 1);

                if (cnt == 0)
                {
                    // res.pb(p);
                    cnt = p;
                    p = 0;
                    dis++;
                }
                for (auto x : adj[node])
                {
                    if (!vis[x])
                        v.pb(x), vis[x] = 1;
                }
            }
        }
    }
    while (k--)
    {
        ll a, b;
        cin >> a >> b;
    }
    for (auto x : res)
        cout << x << " ";
    cout << "\n";
    return;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    ll t = 1;
    // cin >> t;
    for (ll i = 1; i <= t; i++)
    {
        // cout << "Case #" << i << ": ";
        HHM();
    }
}
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
