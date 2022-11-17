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
    ll i, j, k;
    string s, s1;
    cin >> s >> s1;
    map<char, int> mp;
    mp['S'] = 5, mp['M'] = 10, mp['L'] = 15, mp['X'] = 1;
    ll res1 = 0, res2 = 0;
    ll x = 0, m = 0, l = 0, ss = 0;
    sort(all(s));
    sort(all(s1));
    for (auto x : s)
    {
        if (x == 'L')
        {
            res1 += mp[x];
            l++;
        }
        if (x == 'M')
        {
            m++;
            res1 += mp[x];
        }
        if (x == 'S')
        {
            ss++;
            res1 += mp[x];
        }
        if (x == 'X' && ss > 0)
            res1 -= mp[x];
        if (x == 'X' && l > 0)
            res1 += mp[x];
    }
    x = 0, m = 0, l = 0, ss = 0;
    for (auto x : s1)
    {
        if (x == 'L')
        {
            res2 += mp[x];
            l++;
        }
        if (x == 'M')
        {
            m++;
            res2 += mp[x];
        }
        if (x == 'S')
        {
            ss++;
            res2 += mp[x];
        }
        if (x == 'X' && ss > 0)
            res2 -= mp[x];
        if (x == 'X' && l > 0)
            res2 += mp[x];
    }
    if (res1 > res2)
        cout << ">"
             << "\n";
    else if (res1 == res2)
        cout<< "="
        << "\n";
    else
        cout << "<"
             << "\n";
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
