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
// #define mem memset(dream, -1, sizeof(dream))
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
    ll nodd = (k - n + 1) / 2;
    if (n % 2 && k % 2)
        nodd++;
    ll neven = k - n + 1 - nodd;
    ll cnt = 0, res = 0;
    ll tv = (ceil((n - 6) / 12.0));
    ll r = 6 + (tv)*12;
    ll pp = 0;
    if (r <= k)
        pp = ((k - r) / 12) + 1;
    cnt = pp;

    res += nodd * 2;
    res += cnt * 4;
    res += (neven - cnt) * 3;
    cout << res << "\n";
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
