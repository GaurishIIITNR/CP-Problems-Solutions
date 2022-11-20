/*
========================================================================================
                               // ****हर हर महादेव🙏🙏***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 18-02-2022**** //
                            // ******TIME:16:07:54****** //
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
     ll cnt=0;
     ll cnt1=0;
     bool flag=0;
     string a,b;
     cin>>a>>b;
    // cout<<a<<"   "<<b;
    for(int i=0;i<a.length();i++)
    {
        if(a[i]=='|';
        flag = 1;
        else if(flag==0)
        cnt++;
        else
        cnt1++;
    }
    if(cnt1==cnt)
    {
      if(b.length()%2==0)
      {
          for(i=0;i<cnt;i++)
          cout <<a[i];
          
          cout<<"|";

      }
    }

}
