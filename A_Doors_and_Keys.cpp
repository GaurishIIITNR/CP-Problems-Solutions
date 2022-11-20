/*
========================================================================================
                               // ****हर हर महादेव🙏🙏***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 22-02-2022**** //
                            // ******TIME:20:07:28****** //
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
  string s;
  cin>>s; ll cnt=0;
  ll i,j;
  foi(i,0,6,1){
      if(s[i]=='R')
      {
          fod(j,i,0,1)
          {
              if(s[j]=='r')
              cnt++;
          }
      }
      else if(s[i]=='G')
      {
          fod(j,i,0,1)
          {
              if(s[j]=='g')
              cnt++;
          }
      }
      else if(s[i]=='B')
      {
          fod(j,i,0,1)
          {
              if(s[j]=='b')
              cnt++;
          }
      }
      
      
  }
  if(cnt==3)
  cout<<"YES\n";
  else
  cout<<"NO\n"
   
   
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
