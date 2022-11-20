// HAR HAR MAHADEV
// DATE: 10-04-2022
// TIME:17:18:39
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
#define mp make_pair
#define fir first
#define sec second
#define all(x) x.begin(), x.end()
#define part(x, a, b) x.begin() + a, x.begin() + b
#define Pi 3.1415926535897932384626

void gaurish()
{
    ll i, j, k;
    vp(ll, ll, v);
    ll a, b;
    cin >> a >> b;
    foi(i, 0, a, 1)
        foi(j, 0, b, 1)
    {
        char c;
        cin >> c;
        if (c == '*')
        {
            v.pb({i + 1, j + 1});
            // deb(i + 1);
            // deb(j + 1);
        }
    }
    if (v[0].first == v[1].first)
    {
        if (v[0].second == v[2].second)
            cout << v[2].first << " " << v[1].second;
        else
            cout << v[2].first << " " << v[0].second;
    }
    else
    {
        if (v[0].second == v[2].second)
            cout << v[0].first << " " << v[1].second;
        else
            cout << v[0].first << " " << v[2].second;
    }

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
    // cin>>t;

    while (t--)
    {
        gaurish();
    }
}
