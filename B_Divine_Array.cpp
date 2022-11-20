/*
========================================================================================
                               // ****हर हर महादेव🙏🙏***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 24-02-2022**** //
                            // ******TIME:15:24:49****** //
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
#define pb push_back
#define mp make_pair
#define fir first
#define sec second
#define all(x) x.begin(), x.end()
#define part(x, a, b) x.begin() + a, x.begin() + b
#define Pi 3.1415926535897932384626

void gaurish()
{
    ll n, i, j, k, ind;
    cin >> n;
    vec(ll, v)(n, 0);
    vec(ll, change)(n, 0);
    vec(ll, dup)(n, 0);
    dup = v;
    foi(i, 0, n, 1)
            cin >>
        v[i];
    map<ll, ll> mp;
    ll i = 1;
    while (1)
    {
        fo1(j, 0, n, 1)
            mp[v[j]]++;
        fo1(j, 0, n, 1)
            change[i] = mp[v[j]];
        if (v == change)
        {
            ind = i;
            break;
        }
        else
            v = change;
        i++;
    }
    ll b;
    cin >> b;
    while (b--)
    {
        ll c, d;
        if (d >= ind)
            cout << v[c - 1] << "\n";
        while ()
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
    cin >> t;

    while (t--)
    {
        gaurish();
    }
}
