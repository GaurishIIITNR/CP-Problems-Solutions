#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector<ll> page, price;
vector<ll> dp(1000002, -1);
bool f(ll smtar, ll n, ll tar)
{
    // Base
    if (n == -1 && smtar == 0 && tar >= 0)
        return 1;
    if (n == -1)
        return 0;
    if (dp[smtar] != -1)
        return (bool)(dp[smtar] % 2 == 1);
    // Recursive
    bool p = 0;
    if (smtar - page[n] >= 0)
        p = f(smtar - page[n], n - 1, tar - price[n]);
    bool p1 = f(smtar, n - 1, tar);
    dp[smtar] = p | p1;
    return p | p1;
}
int main()
{
    ll n, tar;
    cin >> n >> tar;
    for (ll i = 0; i < n; i++)
    {
        ll d;
        cin >> d;
        price.push_back(d);
    }
    ll sm = 0;
    for (ll i = 0; i < n; i++)
    {
        ll d;
        cin >> d;
        page.push_back(d);
        sm += d;
    }
    ll mx = 0;
    for (ll i = 1; i <= sm; i++)
    {
        if (f(i, n - 1, tar))
            mx = i;
    }
    cout << mx;
}

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int
// vector<ll> page, price;
// vector<vector<ll>> dp(1001, vector<ll>(100002, -1));
// ll f(ll tar, ll n, ll sm)
// {
//     // Base
//     if (sm == tar)
//         return 0;
//     if (n == 0)
//         return 0;
//     if (dp[n][sm] != -1)
//         return dp[n][sm];
//     // Recursive
//     if (sm + price[n - 1] <= tar)
//         return dp[n][sm] =max(page[n - 1] + f(tar, n - 1, sm + price[n - 1]), f(tar, n - 1, sm));
//     else
//         return dp[n][tar] =f(tar, n - 1, sm);
// }
// int main()
// {
//     ll n, tar;
//     cin >> n >> tar;
//     for (ll i = 0; i < n; i++)
//     {
//         ll d;
//         cin >> d;
//         price.push_back(d);
//     }
//     for (ll i = 0; i < n; i++)
//     {
//         ll d;
//         cin >> d;
//         page.push_back(d);
//     }
//     cout << f(tar, n, 0);
// }