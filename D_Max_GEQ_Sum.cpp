//🚩HHM🚩
// DATE: 31-05-2022
// TIME:21:49:29

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
    vec(ll, v)(n);
    for (i = 0; i < n; i++)
        cin >> v[i];
    for (i = 0; i < n - 1; i++)
    {
        if (v[i] > 0)
        {
            bool flag = 0;
            for (j = i + 1; j < n; j++)
            {
                if (v[j] < 0)
                {
                    flag = 1;
                    i = j - 1;
                    break;
                }
                else if (v[j] > 0)
                {
                    cout << "NO\n";
                    return;
                }
            }
            if (!flag)
            {
                cout << "YES\n";
                return;
            }
            if (flag)
                continue;
        }
    }
    ll sm = 0, mx = INT_MIN;
    for (i = 0; i < n; i++)
    {
        mx = max(mx, v[i]);
        sm += v[i];
        if (sm > mx)
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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
