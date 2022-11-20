/*
========================================================================================
                               // ****हर हर महादेव🙏🙏***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 19-02-2022**** //
                            // ******TIME:21:24:03****** //
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
   // cin>>t; 
    while(t--) 
    {
        ll a;
        cin>>a;
        vector<ll> v(a);
        for(ll i=0;i<a;i++)
        cin>>v[i];
        // for(ll i=0;i<a;i++)
        // cout<<v[i]<<"\n";
        ll k=0;
        for(ll i=0;i<a-1;i++)
        {
            if(v[i]<v[i+1])
               cout<<"";
            else
            {
                for(ll j=i;j>=k;j--)
                cout<<v[j]<<" ";
                k=i+1;
            }
        }
    }
}
