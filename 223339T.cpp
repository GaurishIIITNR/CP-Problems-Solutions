#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll dp[101];
ll f(ll &n, ll &r)
{
    if (r == n)
        return 1;
    if (dp[n] != -1)
        return dp[n];
    ll c = n;
    ll c1 = n - r;
    n--;
    return dp[n] = (c * f(n, r)) / c1;
}
int main()
{
    memset(dp, -1, sizeof(dp));
    ll n, r;
    cin >> n >> r;
    cout << f(n, r);
}