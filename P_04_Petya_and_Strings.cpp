/*
========================================================================================
                               // ****हर हर महादेव🙏🙏***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 02-03-2022**** //
                            // ******TIME:13:43:41****** //
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
    ll i, j, k;
    string a, b;
    cin >> a >> b;
    foi(i, 0, a.length(), 1)
    {
        if ((int)a[i] >= 65 && (int)a[i] <= 90)
            a[i] = char((int)a[i] + 32);
        if ((int)b[i] >= 65 && (int)b[i] <= 90)
            b[i] = char((int)b[i] + 32);
    }
    vec(string, v);
    if (a == b)
        cout << 0;
    else
    {
        v.pb(a);
        v.pb(b);
        sort(all(v));
        if (a == v[0])
            cout << -1;
        else
            cout << 1;
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
