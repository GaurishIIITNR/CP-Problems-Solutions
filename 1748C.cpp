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
    cin >> n;
    vector<ll> v(n, 0);
    vin(v, n);
    ll sm = 0, cnt = 0;
    vector<ll> sum;
    ll cnt = 0;
    for (i = 0; i < n; i++)
    {
        sm += v[i];
        sum.pb(sm);
        if (sm == 0 && v[i] != 0)
            cnt++;
    }
    bool flag = 0;
    ll mx = 0;ll cn=0;
    for (i = 0; i < n; i++)
    {
        if (v[i] == 0 && flag == 0)
            flag = 1;
        else if (v[i] == 0 && flag)
        {
            cnt += mx;
            mx = 0;
        }
        if (i + 1 < n && abs(v[i]) == abs(v[i + 1]))
        {
            cn++;
            i++;
        }
        else
        {
            mx = max(mx, cn);
            cn = 0;
        }
    }

    // deb2(mx, cnt);
    cout << max(cnt, mx) << "\n";
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
