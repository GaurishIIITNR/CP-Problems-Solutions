//🚩HHM🚩
// DATE: 03-06-2022
// TIME:21:09:28

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
    int n;
    cin >> n;
    vector<int> v;
    ll cnte = 0;
    ll cnto = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        if (x % 2 == 1)
        {
            cnto++;
        }
        else
        {
            cnte++;
        }
    }
    if (cnto > 0)
    {
        cout << cnte << '\n';
        return;
    }
    else
    {
        ll cnt = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            if (v[i] % 2 == 0)
            {
                ll curr = 0;
                while (v[i] % 2 != 1)
                {
                    v[i] /= 2;
                    curr++;
                }
                cnt = min(cnt, curr);
            }
        }

        ll ans = cnt + cnte - 1;
        cout << ans << '\n';
    }
}

int main()
{

    ll t;
    cin >> t;
    while (t--)
    {
        hhm();
    }
    return 0;
}