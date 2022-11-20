#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll gcd(ll a, ll b)
{
    if(a>b)
    swap(a,b);
    if(b%a==0)
    return a;
    return gcd(a,b%a);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
    //cin >> t;

    while (t--)
    {
        ll a,b;
        cin >> a>>b;
        cout<<gcd(a,b)<<" "<<(a*b)/gcd(a,b);
    }
}
