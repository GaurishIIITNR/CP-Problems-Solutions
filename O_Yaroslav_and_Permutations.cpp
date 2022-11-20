/*
========================================================================================
                               // ****हर हर महादेव🙏🙏***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 18-02-2022**** //
                            // ******TIME:18:31:43****** //
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
     vector<ll> v(10000,0);
    while(t--) 
    {
         ll a;
         cin>>a;
         v[a]++;
    }
    sort(v.begin(),v.end());
   // cout<<v[9999]<<"\n";
    (x%2==1)?((v[9999]<=(x+2)/2)?cout<<"YES":cout<<"NO"):((v[9999]<=x/2)?cout<<"YES":cout<<"NO");
}
