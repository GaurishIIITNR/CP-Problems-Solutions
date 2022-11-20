/*
========================================================================================
                               // ****हर हर महादेव🙏🙏***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 18-02-2022**** //
                            // ******TIME:19:54:45****** //
========================================================================================
*/
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    cin>>t;
    vector<ll> v; 
    while(t--) 
    {
       ll a;
       cin>>a;
       string s=to_string(a);
       for(ll i=0; i<s.length(); i++)
       {
           if(s[i]=='0')
           v.push_back(a);
       }  
    }
    sort(v.begin(), v.end());
    cout<<v.size()<<"\n";
    for(ll i=0; i<v.size(); i++)
    cout<<v[i]<<" ";
}
