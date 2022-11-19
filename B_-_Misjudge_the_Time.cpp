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
void dfs(vector<ll> adj[], ll node, vector<bool> &vis)
{
    vis[node] = 1;
    for (auto x : adj[node])
        if (!vis[x])
            dfs(adj, x, vis);
}
// ll dream[];
ll mod = 1000000007;
#define all(x) x.begin(), x.end()
#define mem memset(dream, -1, sizeof(dream))
#define Pi 3.1415926535897932384626
#define deb(v) cout << #v << " " << v << "\n"
#define deb2(v, k) cout << #v << " " << v << "\n" \
                        << #k << " " << k << "\n"
bool con(ll n, ll k)
{
    ll h1, h2, m1, m2;
    h1 = n / 10, h2 = n % 10;
    m1 = k / 10, m2 = k % 10;
    if (((h1 * 10) + m1) < 24 && ((h2 * 10) + m2) < 60)
        return 1;
    return 0;
}
void HHM()
{
    // mem;
    ll i, j, k;
    ll n;
    cin >> n >> k;
    ll res = n * 60 + k;
    bool flag = 0;
    for (i = res; i < (24 * 60); i++)
    {
        if (con(i / 60, i % 60))
        {
            cout << i / 60 << " " << i % 60;
            return;
        }
    }
    for (i = 0; i < res; i++)
    {
        if (con(i / 60, i % 60))
        {
            cout << i / 60 << " " << i % 60;
            return;
        }
    }
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
