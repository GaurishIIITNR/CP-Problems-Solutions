//🚩HHM🚩
// DATE: 13-05-2022
// TIME:20:55:41

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define dbl double
#define deb(v) cout << #v << " " << v << "\n"
#define debv(v)           \
    cout << #v << ": ";   \
    for (auto x : v)      \
    {                     \
        cout << x << " "; \
    }                     \
    cout << endl
#define deb2(v, k) cout << #v << " " << v << "\n" \
                        << #k << " " << k << "\n"
#define foi(i, base, n, k) for (i = base; i < n; i += k)
#define fod(i, base, n, k) for (i = base; i >= n; i -= k)
#define vec(type1, name) vector<type1> name
#define vp(type1, type2, name) vector<pair<type1, type2>> name
#define st(type, name) set<type> name
#define mpp(type1, type2, name) map<type1, type2> name
#define pb push_back
//#define     mp make_pair
#define fir first
#define sec second
#define all(x) x.begin(), x.end()
#define part(x, a, b) x.begin() + a, x.begin() + b
#define Pi 3.1415926535897932384626

void hhm()
{
    ll i, j, k;
    string s;
    cin >> s;
    ll cnt = 0;
    for (auto x : s)
    {
        if (x == '0')
            cnt++;
    }
    ll mx = 0, res = cnt, one = 0;
    for (ll i = 0; i < s.length(); i++)
    {
        if (s[i] == '1')
            one++;
        else
            cnt--;
        mx = max(one,cnt);
        if (mx <= cnt)
            res = mx;
        else
            break;
    }
    if (i != s.length())
    {
        for (ll j = s.length() - 1; j > i; j--)

        {
            if (s[j] == '1')
                one++;
            else
                cnt--;
            mx = max(one, cnt);
            if (mx <= cnt)
                res = mx;
            else
                break;
        }
    }
    cout << res << "\n";
    return;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll t = 1;
    cin >> t;

    while (t--)
    {
        hhm();
    }
}

//#ifndef ONLINE_JUDGE
//  freopen("in.txt", "r", stdin);
//	 freopen("output.txt", "w", stdout);
//#endif
