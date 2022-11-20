//🚩HHM🚩
// DATE: 08-05-2022
// TIME:21:33:51

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define dbl double
#define deb(v) cout << #v << " " << v << "\n"
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
    vp(ll, ll, v1);
    for (i = 0; i < n; i++)
        cin >> v[i];
    for (i = 0; i < n; i++)
    {
        ll cntl = 0, cnth = 0;
        for (j = i + 1; j < n; j++)
        {
            if (v[i] < v[j])
                cnth++;
            else
                cntl++;
        }
        v1.pb({cnth, cntl});
    }
    ll res = 0;
    for (i = 0; i < n - 4; i++)
    {
        if (v1[i].first > 0)
        {
            for (j = i + 1; j < n; j++)
            {
                if (v[j] > v[i])
                    v1[i].first--;
                if (v1[j].second > 0)
                {
                    // if(v[i]>v[j])
                    res += (v1[j].second) * (v1[i].first);
                    deb2(i,j);
                }
            }
        }
        else
            continue;
    }
    cout << res <<"\n";
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
