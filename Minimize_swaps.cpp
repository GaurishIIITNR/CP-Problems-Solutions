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
ll dream[300003][4][2];
ll mod = 1000000007;
#define all(x) x.begin(), x.end()
#define mem memset(dream, -1, sizeof(dream))
#define Pi 3.1415926535897932384626
#define deb(v) cout << #v << " " << v << "\n"
#define deb2(v, k) cout << #v << " " << v << "\n" \
                        << #k << " " << k << "\n"
ll f(string s, ll i, ll res, ll m)
{
    // Base
    if (i == s.length())
    {
        if (res % 3 == 0)
            return 0;
        else
            return INT_MAX;
    }
    if (dream[i][res][m] != -1)
        return dream[i][res][m];
    // Recursive
    ll res1 = res;
    res1 = (res1 * 2) + (s[i] - '0');
    ll mm;
    if (res1 % 2)
        mm = 1;
    else
        mm = 0;
    res1 %= 3;
    ll p = f(s, i + 1, res1, mm);
    ll p1 = INT_MAX;
    if (i + 1 < s.length())
    {
        swap(s[i], s[i + 1]);
        res = (res * 2) + (s[i] - '0');
        if (res % 2)
            mm = 1;
        else
            mm = 0;
        res %= 3;
        p1 = 1 + f(s, i + 1, res, mm);
    }
    dream[i][res][m] = min(p, p1);
    // deb2(i, res);
    // deb(dream[i][res]);
    return dream[i][res][m];
}
void HHM()
{
    mem;
    ll i, j, k;
    string s;
    cin >> s;
    ll p = f(s, 0, 0, 0);
    if (p == INT_MAX)
        cout << -1 << "\n";
    else
        cout << p << "\n";
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
