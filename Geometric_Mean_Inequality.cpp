//=======================================================//
// HAR HAR MAHADEV
// DATE: 22-04-2022
// TIME:23:12:12
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
    vec(ll, v)(n);
    ll oc = 0, nc = 0;
    for (i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] > 0)
            oc++;
        else
            nc++;
    }
    if (abs((oc / 2) - (nc / 2)) <= 1)
    {
        if ((oc / 2) > (nc / 2) && (oc % 2 == 1))
        {
            cout << "No\n";
            return;
        }
        else if ((oc / 2) < (nc / 2) && (nc % 2 == 1))
        {
            cout << "No\n";
            return;
        }
    }
    else
    {
        cout << "No\n";
        return;
    }
    cout << "Yes\n";
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
