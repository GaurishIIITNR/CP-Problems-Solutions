#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector<ll> v;
ll f(ll st, ll end, bool fl)
{
    // B
    if (st == end && fl)
        return v[st];
    if (st == end)
        return 0;
    // recursive
    ll mx1 = v[st];
    if (st + 1 < end)
    {
        // if (v[st + 1] > v[end])
        //     mx1 += f(st + 2, end, fl);
        // else
        //     mx1 += f(st + 1, end - 1, fl);

        ll m1 = v[st + 1] + f(st + 2, end, fl);
        ll m2 = v[end] + f(st + 1, end - 1, fl);
        if (m1 > m2)
            mx1 += m1 - v[st + 1];
        else
            mx1 += m2 - v[end];
    }
    ll mx2 = v[end];
    if (st < end - 1)
    {
        // if (v[st] > v[end - 1])
        //     mx2 += f(st + 1, end - 1, fl);
        // else
        //     mx2 += f(st, end - 2, fl);

        ll m1 = v[st] + f(st + 1, end - 1, fl);
        ll m2 = v[end - 1] + f(st, end - 2, fl);
        if (m1 > m2)
            mx2 += m1 - v[st];
        else
            mx1 += m2 - v[end - 1];
    }
    return max(mx1, mx2);
}
int main()
{
    ll n;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        ll d;
        cin >> d;
        v.push_back(d);
    }
    bool fl = 0;
    if (n % 2)
        fl = 1;
    cout << f(0, n - 1, fl);
}