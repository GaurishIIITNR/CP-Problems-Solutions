//🚩HHM🚩
// DATE: 01-06-2022
// TIME:21:03:12

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
    vec(ll, v)(n), v1, v2;
    for (i = 0; i < n; i++)
        cin >> v[i];
    v1 = v;
    sort(all(v1));
    ll low = 0, high = 0;
    v2.pb(-1);
    //    vp(ll,ll,v2);bool ;
    for (i = 0; i < n; i++)
    {
        if (v[i] == v1[i])
            v2.pb(i);
    }
    v2.pb(n);
    ll cnt = 0, flag = 1;
    if (v2.size() == 2)
    {
       
    }
    for (i = 0; i < v2.size() - 1; i++)
        if (v2[i + 1] - v2[i] != 1)
            cnt++;
    cout << cnt << "\n";
    deb(cnt);
    debv(v2);
    for (i = 0; i < v2.size() - 1; i++)
    {
        if (v2[i + 1] - v2[i] != 1)
        {
            cout << v2[i] + 2 << " " << v2[i + 1] << "\n";
            sort(v.begin() + v2[i] + 1, v.begin() + v2[i + 1]);
            for (auto x : v)
                cout
                    << x << " ";
            cout << "\n";
        }
    }
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
