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
    vector<ll> v, v1, v2;
    for (i = 0; i < n; i++)
    {
        ll d;
        cin >> d;
        v.pb(d);
        if (d == 1)
            v1.pb(i);
        else if (d == 2)
            v2.pb(i);
    }
    while (k--)
    {
        ll a;
        cin >> a;
        a--;
        if (v[a] != 0)
        {
            cout << 0 << " ";
            continue;
        }
        // vout(v);Z
        // vout(v1);
        // vout(v2);
        ll l = 0, h = v2.size() - 1;
        if (v2.size() > 0)
            while (l < h)
            {
                ll mid = l + (h - l) / 2;
                if (v2[mid] > a)
                    h = mid;
                else
                    l = mid + 1;
            }
        // deb(l);
        ll p = INT_MAX;
        if (v2.size() > 0)
            if (l >= 0 && l < v2.size() && v2[l] > a)
                p = v2[l] - a;
        l = 0, h = v1.size() - 1;
        if (v1.size() > 0)
            while (l < h)
            {
                ll mid = l + (h - l + 1) / 2;
                if (v1[mid] <= a)
                    l = mid;
                else
                    h = mid - 1;
            }
        ll p1 = INT_MAX;
        if (v1.size() > 0)
            if (l >= 0 && l < v1.size() && v1[l] < a)
                p1 = a - v1[l];
        p = min(p, p1);
        if (p == INT_MAX)
            cout << -1 << " ";
        else
            cout << p << " ";
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
        // cout << "Case #" <<i<< ": ";
        HHM();
    }
}
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
