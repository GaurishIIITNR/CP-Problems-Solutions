/*
========================================================================================
                               // ****हर हर महादेव🙏🙏***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 22-02-2022**** //
                            // ******TIME:20:55:00****** //
========================================================================================
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define dbl double
#define deb(v) cout<<#v<<" "<<v<<"\n"
#define foi(i,base,n,k) for(i=base;i<n;i+=k)
#define fod(i,base,n,k) for(i=base;i>=n;i-=k)
#define vec(type1,name) vector<type1>name
#define vp(type1,type2,name) vector<pair<type1,type2>>name
#define st(type,name) set<type>name
#define pb push_back
#define mp make_pair
#define fir first
#define sec second
#define all(x) x.begin(), x.end()
#define part(x,a,b) x.begin()+a, x.begin()+b
#define Pi 3.1415926535897932384626


void gaurish()
{
  ll a,b;
  cin>>a>>b;
  vec(ll,v)(a);
  ll i,smm=0,mn=INT_MAX,mx=INT_MIN;
   vec(ll,sm); 
  foi(i,0,a,1)
   { cin>>v[i];
   if(v[i]>mx)
   mx=v[i];
   if(v[i]<mn)
   mn=v[i];
   }
foi(i,0,a-1,1)
{
    if(v[i]>=0)
     smm+=v[i];
     if(v[i+1]<0])
      {
          sm.pb(smm);
          smm=0;
      }
}
sort(all(sm));
reverse(all(sm));
if(v[0]!=0)


   
   
return; 
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    cin>>t;
     
    while(t--) 
    {
        gaurish();
    }
}
