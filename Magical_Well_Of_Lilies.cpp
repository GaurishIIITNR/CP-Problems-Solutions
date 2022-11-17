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

ll f(ll n, ll tmp, ll n1)
{
    // base
    if (n == 0)
        return 0;
    if (n < 0)
        return INT_MAX;
    // Recursive
    ll p1 = INT_MAX, p2 = INT_MAX;
    ll p = 1 + f(n - 1, tmp, n1);
    if (tmp > 0)
        p1 = 2 + f(n - tmp, tmp, n1);
    tmp = n1 - n;
    if (tmp > 0)
        p2 = 6 + f(n - tmp, tmp, n1);
    return min(p, min(p1, p2));
}
void HHM()
{
    // mem;
    ll i, j, k;
    ll n;
    cin >> n;
    ll res = 0;
    while (n > 40)
    {
        res += 6;
        if (n % 2)
            res++;
        n /= 2;
    }
    ll r1 = 0, r2 = 0;
    ll n1 = n;
    while (n > 20)
    {
        r1 += 6;
        if (n % 2)
            r1++;
        n /= 2;
    }
    r1 += f(n, 0, n);
    r2 = 10 + (n1 / 4) + (n1 % 4);
    r1 = min(r1, r2);
    cout << r1 + res << "\n";
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
