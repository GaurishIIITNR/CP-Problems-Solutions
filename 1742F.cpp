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
ll power(ll a, ll b)
{
    ll res = 1;
    for (ll i = 1; i <= b; i++)
        res *= a;
    return res;
}
void HHM()
{
    ll i, j;
    ll n;
    cin >> n;
    vector<ll> a(26, 0), b(26, 0);
    a[0] = 1, b[0] = 1;
    while (n--)
    {
        ll d, k;
        cin >> d >> k;
        string ss;
        cin >> ss;
        if (d == 2)
        {
            for (auto x : ss)
                b[x - 'a'] += k;
        }
        else if (d == 1)
        {
            for (auto x : ss)
                a[x - 'a'] += k;
        }
        vector<ll> tmp;
        bool flag = 0;
        string s = "", s1 = "";
        for (i = 0; i < 26; i++)
        {
            if (a[i] > 0)
                s += (char)(i + 'a');
            if (b[i] > 0)
                s1 += (char)(i + 'a');
        }
        sort(all(s));
        sort(all(s1));
        reverse(all(s1));
        if (s > s1)
            cout << "NO\n";
        else if (s < s1)
            cout << "YES\n";
        else
        {
            if (a[s[0] - 'a'] < b[s1[0] - 'a'])
                cout << "YES\n";
            else
                cout << "NO\n";
        }
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
        // cout << "Case #" << t << ": ";
        HHM();
    }
}
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
