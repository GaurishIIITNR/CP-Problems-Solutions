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
#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
ll dream[5002][3];
#define Pi 3.1415926535897932384626
#define part(x, a, b) x.begin() + a, x.begin() + b
#define deb(v) cout << #v << " " << v << "\n"
#define deb2(v, k) cout << #v << " " << v << "\n" \
                        << #k << " " << k << "\n"
ll f(vector<ll> v, ll i, ll a, ll b, ll turn)
{
    if (i == v.size())
        return 0;
    if (dream[i][turn] != -1)
        return dream[i][turn];
    if (i < v.size() - 1 && b > (v[i + 1] - v[i]) * a)
    {
        ll p;
        if (turn % 2 == 0)
            p = b + f(v, i + 1, a, b, (turn + 1) % 2);
        else
            p = f(v, i + 1, a, b, (turn + 1) % 2);
        return dream[i][turn] = min(((v[i + 1] - v[i]) * a) + f(v, i + 2, a, b, turn), p);
    }
    else
    {
        ll p;
        if (turn % 2 == 0)
            p = b + f(v, i + 1, a, b, (turn + 1) % 2);
        else
            p = f(v, i + 1, a, b, (turn + 1) % 2);
        return dream[i][turn] = p;
    }
}
void HHM()
{
    ll i, j, k;
    ll n, a, b;
    cin >> n >> a >> b;
    string s, s1;
    cin >> s >> s1;
    vector<ll> v;
    memset(dream, -1, sizeof(dream));
    for (i = 0; i < n; i++)
    {
        if (s[i] != s1[i])
            v.pb(i);
    }
    if (v.size() % 2)
    {
        cout << -1 << "\n";
        return;
    }
    if (v.size() == 0)
    {
        cout << 0 << "\n";
        return;
    }
    if (a >= b)
    {
        if (v.size() == 2 && v[0] + 1 == v[1])
        {
            if (n == 2 || a <= 2 * b)
                cout << a << "\n";
            else
                cout << 2 * b << "\n";
            return;
        }
        cout << (v.size() / 2) * b << "\n";
    }
    else
        cout << f(v, 0, a, b, 0) << "\n";

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
