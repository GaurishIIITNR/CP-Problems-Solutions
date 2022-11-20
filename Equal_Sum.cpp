// HAR HAR MAHADEV
// DATE: 09-04-2022
// TIME:07:40:13
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
//#define mp make_pair
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
    if (n == -1)
        return;
    mpp(ll, bool, mp);
    foi(i, 0, n, 1)
    {
        ll d;
        cin >> d;
        if (d == -1)
            return;
        mp[d] = 1;
    }
    ll cnt = 0;
    for (i = 1; true; i++)
    {

        if (mp[i] == 0)
        {
            cout << i << " ";
            cnt++;
        }
        if (cnt == n - 1)
            break;
    }
    i = 1;
    ll sm2 = 0, sm1 = 0;
    for (auto x : mp)
    {
        if (i < n)
            sm1 += x.first;
        else
            sm2 += x.first;
        i++;
    }
    cout << sm2 - sm1 << endl;
    i = 1;
    for (auto x : mp)
    {
        if (i < n)
            cout << x.first << " ";
        else
            break;
        i++;
    }
    cout << sm2 - sm1 << endl;
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
