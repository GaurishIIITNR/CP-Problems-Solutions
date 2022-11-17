/*
========================================================================================
                               // ****  ***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 26-02-2022**** //
                            // ******TIME:23:10:21****** //
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
    ll a, b;
    cin >> a >> b;
    ll cnt = 0;
    vector<ll> v(a);
    for (i = 0; i < v.size(); i++)
        cin >> v[i];
    k = v.size() - 1;
    for (j = 0; j <= k; j++)
    {
        if (v[j] <= b)
            cnt++;
        else if (v[k] <= b)
        {
            cnt++;
            j = j - 1;
            k--;
        }
        else
            break;
    }
    cout << cnt;

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
    // cin >> t;

    while (t--)
    {
        gaurish();
    }
}