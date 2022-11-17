// हर हर महादेव 
#define F first
#define S second
#define dbl double
using namespace std;
#define pb push_back
#define vin(name,size)                                      \
    for (i = 0; i<size ;i++)                                \
    cin>>name[i]
#define vout(name)                                          \
    for (i = 0; i<name.size();i++)                          \
    cout<<name[i]<<" ";                                     \
    cout << endl
#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define Pi 3.1415926535897932384626
#define part(x, a, b) x.begin() + a, x.begin() + b
#define deb(v) cout << #v << " " << v << "\n"
#define deb2(v, k) cout << #v << " " << v << "\n" \
                        << #k << " " << k << "\n"
vector<dbl> arr;
vector<vector<ll>> dp(1001, vector<ll>(1001, -1));
ll mod = (ll)(1e+9) + 7;
dbl res=0.0;
ll f(ll n,ll h,ll t)
{
    // Base
     
    // Recursive
     dbl mult1=arr[n]*f(n-1,h+1,t);
     dbl mult2=(1-arr[n])*f(n-1,h,t+1);
}
void HHM()
{
    ll i, j, k;
    ll n;
    cin >> n;
    for(i=0;i<n;i++){
        dbl d;cin>>d;
        arr.pb(d);
    }
    return;
}
 
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    ll t = 1;
    cin >> t;
    for(ll i=1;i<=t;i++)
    {
      //cout << "Case #" <<i<< ": ";
        HHM();
    }
}
//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);

