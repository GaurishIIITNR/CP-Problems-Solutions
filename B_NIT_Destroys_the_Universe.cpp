//🚩HHM🚩
// DATE: 25-06-2022
// TIME:20:19:43

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define dbl double
#define deb(v) cout << #v << " " << v << "\n"
#define deb2(v, k) cout << #v << " " << v << "\n" \
                        << #k << " " << k << "\n"
#define vin(name, size)        \
    for (i = 0; i < size; i++) \
    cin >> name[i]
#define vout(name)                    \
    for (i = 0; i < name.size(); i++) \
        cout << name[i] << " ";       \
    cout << endl
#define vec(type1, name) vector<type1> name
#define vp(type1, type2, name) vector<pair<type1, type2>> name
#define st(type, name) set<type> name
#define mpp(type1, type2, name) map<type1, type2> name
#define pb push_back
#define MP make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define part(x, a, b) x.begin() + a, x.begin() + b
#define Pi 3.1415926535897932384626
ll power(ll a, ll b)
{
    ll res = 1;
    for (ll i = 1; i <= b; i++)
        res *= a;
    return res;
}
// set<ll>st;
// map<ll,ll>mp;
// string s;cin>>s;

void HHM()
{
    ll i, j, k;
    ll n;
    cin >> n;
    vector<ll> v(n, 0);
    ll cnt = 0;
    for (i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] == 0)
            cnt++;
    }
    if (cnt == 0)
    {
        cout << 1 << "\n";
        return;
    }
    if (cnt == n)
    {
        cout << 0 << "\n";
        return;
    }
    ll low = 0, cnt1 = 0;
    for (i = 0; i < n; i++)
    {
        if (v[i] != 0)
        {
            low = i;
            break;
        }
        else
            cnt1++;
    }
    if (cnt == cnt1)
    {
        cout << 1 << "\n";
        return;
    }
    ll cnt2 = 0;
    for (i = n - 1; i >= 0; i--)
    {
        if (v[i] != 0)
        {
            low = i;
            break;
        }
        else
            cnt2++;
    }
    if (cnt == cnt2)
    {
        cout << 1 << "\n";
        return;
    }
    if (cnt1 + cnt2 == cnt)
    {
        cout << 1 << "\n";
        return;
    }
    cout << 2 << "\n";
    // cnt = 0;
    // ll low, high;
    // bool flag = 0;
    // for (ll i = 0; i < n; i++)
    // {
    //     if (v[i] == 0 && flag == 0)
    //     {
    //         if (i != 0)
    //             cnt++;
    //         low = i;
    //         flag = 1;
    //     }
    //     else if (flag == 1 && v[i] == 0)
    //     {
    //         if (low != i - 1)
    //             cnt++;
    //         low = i;
    //     }
    // }
    // if (low != n - 1)
    //     cnt++;
    // cout << cnt << "\n";
    return;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll t = 1;
    cin >> t;

    while (t--)
    {
        HHM();
    }
}
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
