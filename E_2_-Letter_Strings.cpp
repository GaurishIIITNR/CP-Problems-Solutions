//=======================================================//
// HAR HAR MAHADEV
// DATE: 21-04-2022
// TIME:23:57:01
//=======================================================//
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define dbl double
#define deb(v) cout << #v << " " << v << "\n"
#define foi(i, base, n, k) for (i = base; i < n; i += k)
#define fod(i, base, n, k) for (i = base; i >= n; i -= k)
#define vec(type1, name) vector<type1> name
#define vp(type1, type2, name) vector<pair<type1, type2>> name
#define st(type, name) set<type> name
#define mpp(type1, type2, name) map<type1, type2> name
#define pb push_back
//#define mp make_pair
#define fir first
#define sec second
#define all(x) x.begin(), x.end()
#define part(x, a, b) x.begin() + a, x.begin() + b
#define Pi 3.1415926535897932384626

void gaurish()
{
    ll i, j, k;
    ll n;
    cin >> n;
    vec(string, ts);
    mpp(string, ll, mp);
    string s;
    while (n--)
    {
        cin >> s;
        ts.pb(s);
        mp[s]++;
    }
    mpp(char, ll, mp1);
    mpp(char, ll, mp2);
    for (auto x : ts)
        mp1[x[0]]++;
    for (auto x : ts)
        mp2[x[1]]++;
    ll res = 0;
    for (auto x : mp1)
        res += ((x.second - 1) * x.second) / 2;
    for (auto x : mp2)
        res += ((x.second - 1) * x.second) / 2;
    for (auto x : mp)
        res -= ((x.second - 1) * x.second);

    cout << res << "\n";
    return;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    /*#ifndef ONLINE_JUDGE
             freopen("in.txt", "r", stdin);
             freopen("output.txt", "w", stdout);
    #endif*/
    ll t = 1;
    cin >> t;

    while (t--)
    {
        gaurish();
    }
}
