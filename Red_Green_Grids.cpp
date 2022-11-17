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
#define mod 1000000007

ll var[100001];
ll pwr(ll n, ll c, ll m)
{
    ll x = 1, y = n;
    while (c > 0)
    {
        if (c % 2 == 1)
        {
            x = (x * y);
            if (x > m)
                x %= m;
        }
        y = (y * y);
        if (y > m)
            y %= m;
        c /= 2;
    }
    return x;
}

ll elr(ll n, ll m)
{
    return pwr(n, m - 2,m);
}

ll cmb(ll n, ll r, ll m)
{
    return (var[n] * ((elr(var[r], m) * elr(var[n - r], m)) % m)) % m;
}


void HHM()
{
    ll i, j, k;
    ll n;
    cin >> n>>k;
    if((n+k-1)%2){
        cout<<0<<"\n";
        return;
    }
    var[0] = 1;
    for (int i = 1; i < (n+k); i++)
        var[i] = (var[i - 1] * i) % mod;
     ll res=cmb((n+k-1),(n+k-1)/2 , mod);
     
    return;
}
 
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    ll t = 1;
    cin >> t;
    for(ll i=1;i<=t;i++)
    {
      //cout << "Case #" << t << ": ";
        HHM();
    }
}
//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);

