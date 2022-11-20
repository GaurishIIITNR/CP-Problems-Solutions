//=======================================================//
// HAR HAR MAHADEV
// DATE: 20-04-2022
// TIME:16:18:13
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

void gaurish(ll n)
{
    ll i, j;
    ll low = 1, high = n;
    while (high - 1 != low)
    {
        ll mid = low + (high - low) / 2;
        cout << "? " << low << " " << high << endl;
        ll res;
        cin >> res;
        if (res >= mid)
        {
            cout << "? " << mid << " " << high << endl;
            ll x;
            cin >> x;
            if (x == res)
            {
                low = res + 1;
                mid = res;
            }
            else
                high = mid;
        }
        else
        {
            cout << "? " << low << " " << mid << endl;
            ll x;
            cin >> x;
            if (x == res)
            {
                high = res - 1;
                mid = res;
            }
            else
                low = mid;
        }
    }
    cout << "? " << low << " " << high << endl;
    ll k;
    cin >> k;
    if (k == low)
        cout << "! " << high << endl;
    else
        cout << "! " << low << endl;
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
    ll t;
    while (cin >> t)
    {
        gaurish(t);
    }
}
