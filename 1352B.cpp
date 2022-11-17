//=======================================================//
// HAR HAR MAHADEV
// DATE: 20-04-2022
// TIME:12:12:16
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
    ll i, j;
    ll n, k;
    cin >> n >> k;
    if (n % 2 && k % 2 && n >= k)
    {
        cout << "YES\n";
        for (i = 0; i < k - 1; i++)
            cout << 1 << " ";
        cout << (n - k + 1) << "\n";
    }
    else if (n % 2 == 0 && k % 2 == 0 && n >= k)
    {
        cout << "YES\n";
        for (i = 0; i < k - 1; i++)
            cout << 1 << " ";
        cout << (n - k + 1) << "\n";
    }

    else if (n % 2 == 0 && k % 2 && n >= 2 * k)
    {
        cout << "YES\n";
        for (i = 0; i < k - 1; i++)
            cout << 2 << " ";
        cout << (n - ((k - 1) * 2)) << "\n";
    }

    else
        cout << "NO\n";
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