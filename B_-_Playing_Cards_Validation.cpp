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
    cin >> n;
    ll n1 = n;
    ll c = 0;
    set<string>st;
    while (n--)
    {
        string s;
        cin >> s;

        if (s[0] == 'H' || s[0] == 'D' || s[0] == 'S' || s[0] == 'C')
            c++;
        if (s[1] == 'A' || s[1] == '2' || s[1] == '3' || s[1] == '4' || s[1] == '5' || s[1] == '6' || s[1] == '7' || s[1] == '8' || s[1] == '9' || s[1] == 'J' || s[1] == 'T' || s[1] == 'K' || s[1] == 'Q')
            c++;
        st.insert(s);
    }
    if (c == (2 * n1) && st.size()==n1)
        cout << "Yes";
    else
        cout << "No";

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
