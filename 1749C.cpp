// Your worst fear owns this
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

using namespace std;
bool predicate(vector<ll> v, ll m)
{
    ll zz = m;
    ll st = 1;
    ll xx = 0;
    while (zz > 0)
    {
        srv(v);
        ll term = m + 1;
        term -= st;
        if (v.sz == 0)
        {
            xx++;
            break;
        }
        auto zx = upper_bound(v.begin(), v.end(), term);
        auto it = v.begin();
        ll tt = zx - v.begin();
        if (tt == 0)
        {
            xx++;
            break;
        }
        tt--;
        ll mm = INT_MAX;
        if (v.sz >= 2)
        {
            dv(v4);

            ll bb = 0;
            for (int i = 0; i < v.sz; i++)
            {
                if (v[i] != v[tt] || bb == -1)
                {
                    mm = min(mm, v[i]);
                }
                else
                {
                    bb = -1;
                }
            }
            v[tt] = term + mm;
            for (int i = 0; i < v.sz; i++)
            {
                if (v[i] != mm)
                {
                    v4.push_back(v[i]);
                }
                else
                {
                    mm = -1;
                }
            }
            v = v4;
        }
        else
        {
            v.pop_back();
        }
        st++;
        zz--;
    }
    if (xx > 0)
    {
        return false;
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(0);
    int q, j = 0;
    cin >> q;
    int arr[q];
    while (j < q)
    {
        ll n;
        cin >> n;
        vector<ll> v;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
        }

        ll high = n;
        ll low = 0;
        while (high >= low)
        {

            if (predicate(v, high))
                break;
            high--;
        }
        cout << high << endl;
        j++;
    }
    return 0;
}