//=======================================================//
// HAR HAR MAHADEV
// DATE: 24-04-2022
// TIME:04:42:09
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
// #define mp make_pair
#define fir first
#define sec second
#define all(x) x.begin(), x.end()
#define part(x, a, b) x.begin() + a, x.begin() + b
#define Pi 3.1415926535897932384626

bool palicheck(ll i)
{
    string s = to_string(i);
    bool flag = 0;
    for (ll j = 0; j < s.length(); j++)
    {
        if (s[j] != s[s.length() - 1 - j])
        {
            flag = 1;
            break;
        }
    }
    if (!flag)
        return 1;
    else
        return 0;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);\

    /*#ifndef ONLINE_JUDGE
             freopen("in.txt", "r", stdin);
             freopen("output.txt", "w", stdout);
    #endif*/
    
    ll t = 1;
    cin >> t;
    
    for (int tc = 1; tc <= t; tc++)
    {
        cout << "Case #" << tc << ": ";
        ll n;
        cin >> n;
        ll cnt = 0;
        for (ll i = 1; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                if (n / i == i)
                {
                    if (palicheck(i) == 1)
                        cnt++;
                }
                else
                {
                    if (palicheck(i) == 1)
                        cnt++;
                    if (palicheck(n / i) == 1)
                        cnt++;
                }
            }
        }
        cout << cnt << "\n";
    }
}