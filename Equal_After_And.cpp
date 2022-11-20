//🚩HHM🚩
// DATE: 15-05-2022
// TIME:21:01:18

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
    st(ll, s);
    for (i = 0; i < n; i++)
    {
        cin >> v[i];
        s.insert(v[i]);
    }
    if (s.size() == 1)
    {
        cout << 0 << "\n";
        return;
    }
    ll cnt = 0;
    while (1)
    {
        ll d = cnt;
        for (i = 0; i < v.size() - 1; i++)
        {
            if (v[i] != v[i + 1])
            {
                v[i] = v[i] & v[i + 1];
                v.erase(v.begin() + i + 1);
                cnt++;
            }
        }
        if (d == cnt)
            break;
    }
    cout << cnt << "\n";
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
