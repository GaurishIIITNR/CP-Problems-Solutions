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
void HHM()
{
    // mem;
    ll i, j, k;
    ll n;
    cin >> n >> k;
    vector<vector<ll>> v;
    vector<ll> r(61, 0);
    for (i = 0; i < n; i++)
    {
        j = 0;
        ll d;
        cin >> d;
        while (d > 0)
        {
            r[j] += (d % 2);
            d /= 2;
            j++;
        }
        v.pb(r);
        // vout(r);
        // cout << "\n";
    }
    while (k--)
    {
        ll sb, l1, r1, l2, r2;
        cin >> sb >> l1 >> r1 >> l2 >> r2;
        l1--, l2--, r1--, r2--;
        ll p1, p0, p11, p00;
        if (l1 == 0)
        {
            p1 = v[r1][sb];
            p0 = r1 - v[r1][sb] + 1;
        }
        else
        {
            p1 = v[r1][sb] - v[l1 - 1][sb];
            p0 = r1 - l1 - p1 + 1;
        }
        p11 = v[r2][sb] - v[l2 - 1][sb];
        p00 = r2 - l2 - p11 + 1;
        ll res = 0;
        res += (p1 * p00) + (p11 * p0);
        cout << res << "\n";
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
