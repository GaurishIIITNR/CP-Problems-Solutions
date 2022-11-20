/*
========================================================================================
                               // ****हर हर महादेव🙏🙏***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 20-02-2022**** //
                            // ******TIME:17:31:35****** //
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
     
    while(t--) 
    {
        ll a,b;
        cin>>a>>b;
        if(a==1)
        {
            if(b==10||b==2)
            cout<<"Yes";
            else
            cout<<"No";
        }
        else if(a==10)
            {
            if(b==9||b==1)
            cout<<"Yes";
            else
            cout<<"No";
        }
        else if(b==a-1||b==a+1)
          cout<<"Yes";
        else
        cout<<"No";
    }
}
