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
    ll n;
    cin >> n;
    string s;cin>>s;
    ll c=0,c1=0;
    for(auto x:s){
        if(x=='1')c++;
        else c1++;
    }
    if(c1%2 && c%2)cout<<"NO\n";
    else cout<<"YES\n";
    
    
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

