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
#define vvin(name, rowss, colmn)    \
    for (i = 0; i < rowss; i++)     \
    {                               \
        for (j = 0; j < colmn, j++) \
            cin >> name[i][j];      \
    }
#define vvout(name, rowss, colmn)      \
    for (i = 0; i < rowss; i++)        \
    {                                  \
        for (j = 0; j < colmn, j++)    \
            cout << name[i][j] << " "; \
        cout << endl;                  \
    }
#include <bits/stdc++.h>
#define ll long long int
// ll dream[];
#define all(x) x.begin(), x.end()
#define mem memset(dream, -1, sizeof(dream))
#define Pi 3.1415926535897932384626
#define deb(v) cout << #v << " " << v << "\n"
#define deb2(v, k) cout << #v << " " << v << "\n" \
                        << #k << " " << k << "\n"

ll dfs(vector<ll> adj[], ll node, vector<ll> &vis, vector<ll> &res)
{
    vis[node] = 1;
    ll p = 1;
    for (auto x : adj[node])
    {
        if (!vis[x] && res[node] > res[x])
            p += dfs(adj, x, vis, res);
    }
    return p;
    // return p + 1;
}
void HHM()
{
    // mem;
    ll i, j, k;
    ll n;
    cin >> n;
    vector<ll> v(n);
    vin(v, n);
    // vout(v);
    vector<ll> adj[n];
    for (i = 0; i < n - 1; i++)
    {
        ll a, b;
        cin >> a >> b;
        a--;
        b--;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    ll mx = 0;
    for (i = 0; i < n; i++)
    {
        vector<ll> vis(n, 0);
        ll cnt = 0;
        mx = max(mx, dfs(adj, i, vis, v));
    }
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
        cout << "Case #" << i << ": ";
        HHM();
    }
}
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
