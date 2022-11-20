//🚩HHM🚩
// DATE: 10-05-2022
// TIME:20:02:03

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
    ll i, j;
    ll n, k;
    cin >> n >> k;
    if (n == 1 && k == 0)
    {
        cout << 0 << " " << 0 << "\n";
        return;
    }
    if ((n * 9 < k) || k < 1)
    {
        cout << -1 << " " << -1 << "\n";
        return;
    }
    string mx = "";
    string mn = "";
    ll k1 = k, k2 = k;
    for (ll i = 1; i <= n; i++)
    {
        if (k >= 9)
        {
            mx = mx + '9';
            k -= 9;
        }
        else
        {
            mx = mx + (char)(k + '0');
            k -= k;
        }
        // deb(k);
        // deb(mx);
        if (1 + (n - 1) * 9 >= k2)
        {
            if (i == 1)
            {
                mn = '1';
                k1--;
            }
            else if (i <= (n - ceil(k1 / 9.0)))
                mn = mn + '0';
            else if (i == (n - ceil(k1 / 9.0)) + 1)
            {
                if (k1 % 9 == 0)
                {
                    mn = mn + '9';
                    k1 -= 9;
                }
                else
                {
                    mn = mn + (char)((k1 % 9) + '0');
                    k1 -= k1 % 9;
                }
            }
            else
            {
                mn = mn + '9';
                k1 -= 9;
            }
        }
        else
        {
            if (i == 1)
            {
                if (k1 % 9 == 0)
                {
                    mn = mn + '9';
                    k1 -= 9;
                }
                else
                {
                    mn = mn + (char)((k1 % 9) + '0');
                    k1 -= k1 % 9;
                }
            }
            else
            {
                mn = mn + '9';
                k1 -= 9;
            }
        }
    }

    cout << mn << " " << mx << "\n";
    return;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll t = 1;
    // cin >> t;

    while (t--)
    {
        hhm();
    }
}

//#ifndef ONLINE_JUDGE
//  freopen("in.txt", "r", stdin);
//	 freopen("output.txt", "w", stdout);
//#endif
