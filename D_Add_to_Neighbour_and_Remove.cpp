//🚩HHM🚩
// DATE: 26-05-2022
// TIME:18:28:53

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
    ll n;
    cin >> n;
    vec(ll, v)(n), v1;
    ll sm = 0;
    for (i = 0; i < n; i++)
    {
        cin >> v[i];
        sm += v[i];
    }
    // debv(v);
    for (i = n; i > 0; i--)
    {
        if (sm % i == 0)
        {
            v1 = v;
            ll cnt = 0, sm1 = 0;
            for (j = 0; j < v1.size() - 1; j++)
            {
                sm1 += v1[j];
                if (sm1 == sm/i && v1[j] == sm / i)
                    continue;
                if (sm1 > sm / i)
                    break;
                else if (sm1 == sm / i)
                {
                    sm1 = 0;
                    cnt--;
                }
                else if (sm1 < sm / i)
                    cnt++;
            }
            if (j == n)
            {
                cout << cnt << "\n";
                return;
            }
        }
    }
    // cout << "\n";
    cout << n - 1 << "\n";
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
