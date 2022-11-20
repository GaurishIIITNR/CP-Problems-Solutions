/*
========================================================================================
                               // ****हर हर महादेव🙏🙏***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 20-02-2022**** //
                            // ******TIME:17:37:30****** //
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
    set<ll>v; 
    while(t--) 
    {
      ll a;
      cin>>a;
      v.insert(a);   
    }
    cout<<v.size();
}
