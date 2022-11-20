/*
========================================================================================
                               // ****हर हर महादेव🙏🙏***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 02-03-2022**** //
                            // ******TIME:00:08:11****** //
========================================================================================
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define dbl double
#define deb(v) cout << #v << " " << v << "\n"
#define foi(i, base, n, k) for (i = base; i < n; i += k)
#define fod(i, base, n, k) for (i = base; i >= n; i -= k)
#define vec(type1, name) vector<type1> name
#define erase(name, i) name.erase(name.begin() + i)
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
    double j, k, sm = 0.0;
    cin >> k;
    ll i = (ll)k;
    while (i--)
    {
        double d;
        cin >> d;
        sm += (d / 100.0) * (1.0 / k);
    }
    printf("%.15f", sm * 100.0);
    return;
}

int main()
{
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
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
