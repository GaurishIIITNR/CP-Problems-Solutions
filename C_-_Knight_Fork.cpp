/*
========================================================================================
                               // ****हर हर महादेव🙏🙏***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 19-02-2022**** //
                            // ******TIME:18:25:50****** //
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
    //cin>>t;
     
    while(t--) 
    {
      ll a,b,c,d;
       cin>>a>>b>>c>>d;
       ll e=((a-c)*(a-c))+((b-d)*(b-d));

        if(e==20 ||e==10 ||e==0)
        cout<<"Yes";
        else
        cout<<"No";
    }
}
