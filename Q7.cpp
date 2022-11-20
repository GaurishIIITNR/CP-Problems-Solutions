#include <bits/stdc++.h>
using namespace std;


pair<string,ll> bin(ll n)
{
    string s="";
    ll cnt=0; 
    while(n>0)
    {
        ll rem=n%2;
        string k=to_string(rem);
        if(rem)
        cnt++;
        s=k+s;
        n=n/2;
    }
    return {s,cnt};
}
int main() {
   
ll t=1;

cin>>t;
while(t--)
{
    ll n,a;
    cin>>n;
    vector<pair<string,ll>>v;
    for(ll i=1;i<=n;i++)
    {
        v.push_back(bin(i));
    }
   sort(v.begin(),v.end());
    for(auto x:v)
   {
      cout<<x.first<<" "<<x.second<<"\n"; 
   }
   cout<<"\n";
}
	return 0;
}
