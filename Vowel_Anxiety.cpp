// HHM
//  DATE: 06-07-2022
// TIME:21:26:44

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
void HHM()
{
    ll i, j, k;
    ll n;
    cin >> n;
    string s;
    cin >> s;
    vector<string> v;
    string s1 = "";
    ll cnt = 0;
    for (i = 0; i < n; i++)
    {
        if (i == 0 && (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'))
        {
            v.pb("");
            s1 = s[i];
            cnt++;
        }
        else if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            v.pb(s1);
            s1 = s[i];
            cnt++;
        }
        else
        {
            if (cnt % 2 == 0)
                s1 = s[i] + s1;
            else
                s1 += s[i];
        }
    }
    v.pb(s1);
    // cout << v.size() << "\n";
    // for (auto x : v)
    //     cout << x << "\n";
    string res = "";
    for (i = 0; i < v.size() - 1; i++)
    {
        if (i % 2 == 0)
        {
            res = v[i] + res;
        }
        else
            res = res + v[i];
    }
    res += v[v.size() - 1];
    // else
    // {
    //     reverse(all(v[0]));
    //     res = v[0];
    //     for (i = 1; i < v.size() - 1; i++)
    //     {
    //         if (i % 2)
    //             res = res + v[i];
    //         else
    //         {
    //             reverse(all(v[i]));
    //             res = v[i] + res;
    //         }
    //     }
    //     res += v[v.size() - 1];
    // }
    cout << res << "\n";
    return;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll t = 1;
    cin >> t;
    // ll tt=1;
    while (t--)
    {
        // cout << "Case #" << tt << ": ";
        HHM();
        // tt++;;
    }
}
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
