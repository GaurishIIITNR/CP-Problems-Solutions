//=======================================================//
// HAR HAR MAHADEV
// DATE: 23-04-2022
// TIME:17:42:16
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
    ll a, b, c, d, e, f, g;
    cin >> a >> b >> c >> d >> e >> f >> g;
    ll cnt1, cnt2;
    cnt1 = (g / (a + c)) * (a * b);
    if (g % (a + c) >= a)
        cnt1 += (a * b);
    else
        cnt1 += (g % (a + c)) * b;

    cnt2 = (g / (f + d)) * (d * e);

    if (g % (d + f) >= d)
        cnt2 += (d * e);
    else
        cnt2 += (g % (d + f)) * e;

    if (cnt1 > cnt2)
        cout << "Takahashi\n";
    else if (cnt1 == cnt2)
        cout << "Draw\n";
    else
        cout << "Aoki\n";
    // cout<<cnt1<<" "<<cnt2;

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
