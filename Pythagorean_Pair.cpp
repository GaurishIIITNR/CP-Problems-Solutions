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
#define Pi 3.1415926535897932384626
#define part(x, a, b) x.begin() + a, x.begin() + b
#define deb(v) cout << #v << " " << v << "\n"
#define deb2(v, k) cout << #v << " " << v << "\n" \
                        << #k << " " << k << "\n"

bool issq(ll n)
{
    ll r = sqrt(n);
    if (r * r == n)
        return 1;
    return 0;
}
ll issqv(ll n)
{
    return (ll)sqrt(n);
}
void HHM()
{
    ll i, j, k;
    ll n;
    cin >> n;
    ll cnt = 0;
    ll r = 1;
    while (n % 2 == 0)
    {
        n = n / 2;
        cnt++;
        if (cnt % 2 == 0)
            r *= 2;
    }
    if (cnt % 2)
        n = n * 2;
    if (issq(n) && cnt % 2)
    {
        cout << -1 << "\n";
        return;
    }
    for (i = 0; (i * i) <= n; i++)
    {
        if (issq(n - (i * i)))
        {
            cout << i * r << " " << issqv(n - (i * i)) * r << "\n";
            return;
        }
    }
    cout << -1 << "\n";

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