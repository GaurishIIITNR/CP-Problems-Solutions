
/*
========================================================================================
                               // ****हर हर महादेव🙏🙏***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 14-02-2022**** //
                            // ******TIME:22:06:13****** //
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
        ll n;
        cin>>n;
        ll arr[n];
        for(int i=0; i<n; i++)
        cin>>arr[i];


        for(int i=1;i<n;i++){
          if(((arr[i]+arr[i-1])%2!=0) && arr[i]<arr[i-1])
          swap(arr[i],arr[i-1]);


        }

        bool flag=true;
        for(int i=1; i<n; i++){
                if(arr[i]<arr[i-1])
                flag=false;
        }

        if(flag)
        cout<<"YES"<<"\n";
        else
        cout<<"NO"<<"\n";
         
    }
}
