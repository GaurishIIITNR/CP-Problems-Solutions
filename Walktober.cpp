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
ll power(ll a,ll b){
    ll res=1;
    for(ll i=1;i<=b;i++)res*=a;
     return res;
}
void HHM()
{
    ll i, j, k;
    ll n,m,p;
    cin >> n>>m>>p;
    ll arr[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    ll res=0;
    for(i=0;i<m;i++){
        ll mx=INT_MIN;
        for(j=0;j<n;j++){
            mx=max(mx,arr[j][i]);
        }
         res+=(mx-arr[p-1][i]);
    }cout<<res<<"\n";
    
    return;
}
 
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    ll t = 1;
    cin >> t;
    for(ll i=1;i<=t;i++)
    {
        cout << "Case #" <<i<< ": ";
        HHM();
    }
}
//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);

