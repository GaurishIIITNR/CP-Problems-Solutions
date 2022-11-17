// हर हर महादेव
#define F first
#define S second
#define dbl double
using namespace std;
#define pb push_back
#define vin(name, size)        \
    for (i = 0; i < size; i++) \
    cin >> name[i]
#define vout(name)                    \
    for (i = 0; i < name.size(); i++) \
        cout << name[i] << " ";       \
    cout << endl
#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define Pi 3.1415926535897932384626
#define part(x, a, b) x.begin() + a, x.begin() + b
#define deb(v) cout << #v << " " << v << "\n"
#define deb2(v, k) cout << #v << " " << v << "\n" \
                        << #k << " " << k << "\n"
ll power(ll a, ll b)
{
    ll res = 1;
    for (ll i = 1; i <= b; i++)
        res *= a;
    return res;
}
void HHM()
{
    ll i, j, k;
    ll n;
    cin >> n;
    ll sm = 0;
    for (i = 0; i < n; i++)
    {
        ll d;
        cin >> d; // Your worst fear owns this
#include <bits/stdc++.h>
#define ll long long int
#define srv(v) sort(v.begin(), v.end())
#define rrv(s1) sort(s1.begin(), s1.end(), greater<ll>())
#define str string
#define sz size()
#define dv(v) vector<ll> v
#define ds(s) set<ll> s
#define dm(mp) map<ll, ll> mp
#define debug(x) cout << #x << " " << x << endl
#define MOD 1000000007
        int binpow(int a, int b)
        {
            if (b == 1)
            {
                return a;
            }
            else if (b == 0)
            {
                return 1;
            }
            ll one = binpow(a, b / 2);
            if (b % 2 == 0)
            {
                return one * one;
            }
            else
            {
                return a * one * one;
            }
        }
        using namespace std;
        int main()
        {

            int q, j = 0;
            cin >> q;
            int arr[q];
            while (j < q)
            {
                ll n, m;
                cin >> n >> m;
                ds(s1);

                for (int i = 0; i < m; i++)
                {
                    ll x, y;
                    cin >> x >> y;
                    s1.insert(x);
                }

                if (s1.sz == n)
                {
                    cout << "NO" << endl;
                }
                else
                {
                    cout << "YES" << endl;
                }

                j++;
            }
            return 0;
        }
        sm += d;
    }
    ll mn = INT_MIN;
    for (i = 0; i < n; i++)
    {
        ll d;
        cin >> d;
        sm += d;
        mn = max(mn, d);
    }
    cout << sm - mn << "\n";

    return;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    ll t = 1;
    cin >> t;
    for (ll i = 1; i <= t; i++)
    {
        // cout << "Case #" <<i<< ": ";
        HHM();
    }
}
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
