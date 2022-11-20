// DATE: 02-04-2022
// TIME:00:53:40
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
    string s;
    cin >> s;
    vec(ll, res);
    ll cnt = 0;
    foi(i, 0, s.length()-1, 1)
    {
        if (s[i] == s[i +1] && s[i] == '1')
            cnt++;
        else if (i == s.length() && s[i] == s[i - 1] && s[i] == '1')
        {
            cnt++;
            res.pb(cnt);
            cnt = 0;
        }
        
    }
    sort(all(res));
    reverse(all(res));
    ll re = 0;
    foi(i, 0, res.size(), 1)
    {
        if (i % 2 == 0)
            re++;
    }
    cout << re << "\n";
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
