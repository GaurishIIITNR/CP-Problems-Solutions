/*
========================================================================================
                               // ****हर हर महादेव🙏🙏***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 13-02-2022**** //
                            // ******TIME:23:06:15****** //
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
    ll x=t;
    set<int>v;
    while(t--) 
    {
     ll a;
     cin>>a;
     v.insert(a);    
    }
     (x-v.size()==0)?cout<<-1:cout<<(x-v.size());
}
