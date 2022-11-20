//🚩HHM🚩
// DATE: 05-06-2022
// TIME:21:37:04

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
    // if (n == 1)
    // {
    //     ll d;
    //     cin >> d;
    //     cout << d << "\n";
    //     return;
    // }
    if (n == 2)
    {
        ll d1, d2;
        cin >> d1 >> d2;
        if (d1 & d2 > 0)
        {
            cout << "YES\n";
            cout << 1 << " " << 1 << "\n";
            cout << 2 << " " << 2 << "\n";
            return;
        }
        else
        {
            cout << "NO\n";
            return;
        }
    }
    vp(ll, ll, v);
    mpp(ll, ll, mp);
    for (i = 0; i < n; i++)
    {
        ll d;
        cin >> d;
        ll cnt = 0;
        if (d == 0)
        {
            v.pb({d, -1});
            continue;
        }
        ll d1 = d;
        while (d > 0)
        {
            if (d % 2)
                break;
            d /= 2;
            cnt++;
        }
        v.pb({d1, cnt});
        mp[cnt]++;
    }
    ll res;
    bool flag = 0;
    for (auto x : mp)
    {
        if (x.second > 1)
        {
            res = x.first;
            cout << "YES\n";
            flag = 1;
            break;
        }
    }
    vp(ll, ll, answ);
    ll low = 1, high = n;
    ll cnt = 0;
    if (!flag)
        cout << "NO\n";
    else
    {
        for (i = 0; i < n; i++)
        {
            if (v[i].second == res && cnt + 1 < mp[res])
            {
                answ.pb({low, i + 1});
                low = i + 2;
                cnt++;
            }
            else if (v[i].second == res && cnt < mp[res])
            {
                answ.pb({low, high});
                low = i + 2;
                cnt++;
                break;
            }
        }
        cout << answ.size() << "\n";
        for (auto x : answ)
            cout << x.first << " " << x.second << "\n";
    }

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
