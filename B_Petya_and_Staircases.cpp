// DATE: 29-03-2022
// TIME:19:52:20
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
    cin >> n >> k;
    if (k == 0)
    {
        cout << "YES\n";
        return;
    }

    vec(ll, v)(k);
    for (i = 0; i < k; i++)
        cin >> v[i];
    sort(all(v));

    if (v[k - 1] == n || v[0] == 1)
    {
        cout << "NO\n";
        return;
    }
    if (k < 3)
    {
        cout << "YES\n";
        return;
    }
    for (ll i = 0; i < v.size() - 2; i++)
    {
        if (v[i + 1] == v[i] + 1 && v[i + 2] == v[i] + 2)
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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
