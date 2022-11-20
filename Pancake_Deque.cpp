//=======================================================//
// HAR HAR MAHADEV
// DATE: 24-04-2022
// TIME:21:45:09
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
    for (ll i = 0; i < n; i++)
        cin >> v[i];
    ll mn = 0, cnt = 0;
    while (v.size() > 0)
    {
        k = v.size() - 1;
        if (v[0] <= v[k])
        {
            if (mn <= v[0])
            {
                mn = v[0];
                // deb(v[0]);
                v.erase(v.begin());
                cnt++;
                // deb(cnt);
            }
            else if (mn <= v[k])
            {
                mn = v[k];
                // deb(v[k]);
                cnt++;
                // deb(cnt);
                v.erase(v.end() - 1);
            }
            else
                break;
        }
        else if (v[0] > v[k])
        {
            if (mn <= v[k])
            {
                mn = v[k];
                // deb(v[k]);
                v.erase(v.end() - 1);
                cnt++;
                // deb(cnt);
            }
            else if (mn <= v[0])
            {
                mn = v[0];
                // deb(v[0]);
                v.erase(v.begin());
                cnt++;
                // deb(cnt);
            }
            else
                break;
        }
        else
            break;
    }
    cout << cnt << "\n";
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
 
    for (int tc = 1; tc <= t; tc++)
    {
        cout << "Case #" << tc << ": ";
        gaurish();
    }
}
