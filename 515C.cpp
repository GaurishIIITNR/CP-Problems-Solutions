//HHM
// DATE: 14-05-2022
// TIME:14:46:34

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
    vec(ll, v);
    for (auto x : s)
    {
        if (x == '0' || x == '1')
            continue;
        else
        {
            if (x == '9')
            {
                v.pb(2);
                v.pb(3);
                v.pb(3);
                v.pb(7);
            }
            else if ((x - '0') % 2)
                v.pb((x - '0'));
            else
            {
                if (x == '2')
                    v.pb(2);
                else if (x == '4')
                {
                    v.pb(2);
                    v.pb(2);
                    v.pb(3);
                }
                else if (x == '6')
                {
                    v.pb(5);
                    v.pb(3);
                }
                else
                {
                    v.pb(2);
                    v.pb(2);
                    v.pb(2);
                    v.pb(7);
                }
            }
        }
    }
    sort(all(v));
    reverse(all(v));
    for (auto x : v)
    {
        cout << x;
    }
    cout << "\n";

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