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
bool pallindrome(string s)
{
    string s1 = s;
    reverse(all(s1));
    if (s1 == s)
        return 1;
    return 0;
}
void HHM()
{
    ll i, j, k;
    // ll n;
    // cin >> n;
    string s;
    cin >> s >> k;
    // deb2(s, k);
    // ll h = k / 60, m = k % 60;
    ll tmp = 0;
    string hr = "";
    hr += s[0], hr += s[1];
    string mnt = "";
    mnt += s[3], mnt += s[4];
    // deb2(hr, mnt);
    ll cnt = 0;
    map<string, bool> mp;

    while (1)
    {
        ll hrr = stol(hr);
        ll mntt = stol(mnt);
        mntt += tmp;
        hrr += mntt / 60;
        mntt %= 60;
        hrr %= 24;
        string res = "";
        res += to_string(hrr);
        if (hrr < 10)
            res = '0' + res;
        if (mntt < 10)
            res += '0' + to_string(mntt);
        else
            res += to_string(mntt);
        // deb(res);
        if (mp[res])
            break;
        if (pallindrome(res))
            cnt++;
        mp[res] = 1;
        tmp += k;
    }
    // cout << "\n\n";
    cout << cnt << "\n";

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
