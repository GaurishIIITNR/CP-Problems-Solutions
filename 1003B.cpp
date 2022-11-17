//=======================================================//
// HAR HAR MAHADEV
// DATE: 01-05-2022
// TIME:14:08:56
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
    ll a, b, c;
    cin >> a >> b >> c;
    if (a >= b)
    {
        ll cnt = 0;
        ll c1;
        while (cnt < c)
        {
            if (cnt % 2 == 0)
            {
                cout << 0;
                a--;
                c1 = 0;
            }
            else
            {
                cout << 1;
                b--;
                c1 = 1;
            }
            cnt++;
        }
        if (c1 == 0)
        {
            while (a--)
                cout << 0;
            while (b--)
                cout << 1;
        }
        else
        {
            while (b--)
                cout << 1;
            while (a--)
                cout << 0;
        }
    }
    else
    {
        ll cnt = 0;
        ll c1;
        while (cnt < c)
        {
            if (cnt % 2)
            {
                cout << 0;
                a--;
                c1 = 0;
            }
            else
            {
                cout << 1;
                b--;
                c1 = 1;
            }
            cnt++;
        }
        if (c1 == 0)
        {
            while (a--)
                cout << 0;
            while (b--)
                cout << 1;
        }
        else
        {
            while (b--)
                cout << 1;
            while (a--)
                cout << 0;
        }
    }
    cout << "\n";
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