//=======================================================//
// HAR HAR MAHADEV
// DATE: 22-04-2022
// TIME:19:34:13
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
#define mp make_pair
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
    map<double, ll> mp;
    double sm = 0.0;
    vector<double> v(n);
    for (i = 0; i < n; i++)
    {
        double d;
        cin >> d;
        mp[d]++;
        sm += d;
        v[i] = d;
    }
    double rsm = (sm / n) * 2;
    ll cnt = 0;
    for (auto x : v)
    {
        if (mp[rsm - x] > 0 && (x == rsm - x))
        {
            cnt += mp[rsm - x] - 1;
            mp[x]--;
        }
        else if (mp[rsm - x] > 0)
        {
            cnt += mp[rsm - x];
            mp[x]--;
        }
        else
            continue;
    }
    cout << cnt << "\n";
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
