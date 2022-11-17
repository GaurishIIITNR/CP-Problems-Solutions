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
// ll dream[1003][9];
#define all(x) x.begin(), x.end()
#define mem memset(dream, -1, sizeof(dream));
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
    vector<pair<ll, ll>> v;
    for (i = 0; i < n; i++)
    {
        ll d;
        string s;
        cin >> d >> s;
        ll p = 0;
        for (auto x : s)
        {
            if (x == 'A')
                p += 4;
            else if (x == 'B')
                p += 2;
            else
                p += 1;
        }
        v.pb({d, p});
    }
    ll dream[n + 1][8];
    memset(dream, INT_MAX, sizeof(dream));
    dream[n+1][8] = 0;
    for (i = 1; i <= n; i++)
    {
        for (j = 0; j < 8; j++)
            dream[i][j] = min(dream[i+1][j], v[i].F + dream[i][v[i].S |j]);
    }
    // if()
    cout << dream[n][7] << "\n";
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
