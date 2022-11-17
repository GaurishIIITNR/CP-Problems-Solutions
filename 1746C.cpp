#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t = 1;
    cin >> t;
    while (t--)
    { ll n;cin>>n;
        vector<ll>v(n,0);
        vector<pair<ll,ll>>r;ll m=0;
        for(ll i=0;i<n;i++){cin>>v[i]; m=max(m,v[i]);r.push_back({m-v[i],i+1});}
        sort(r.begin(),r.end());
        ll i=0,cnt=0;vector<ll>p;
        while(cnt<n){
            r[i].first-=cnt+1;p.push_back(r[i].second);
            if(r[i].first<0)i++;
            cnt++;
        }for(auto x:p)cout<<x<<" ";
        cout<<"\n";
    }
}
