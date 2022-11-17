/*
========================================================================================
                               // ****  ***** //
                              // ***AUTHOR: GAURISH OJHA** //
                             // *****DATE: 24-02-2022**** //
                            // ******TIME:14:03:05****** //
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
 string a;
 cin>>a;
 char mn='z';
 ll ind;
 for(ll i=0;i<a.length();i++)
  {
      if(mn>=a[i])
      {
       mn=a[i];
       ind=i;
      }
  } 
  cout<<mn<<" ";
  for(ll i=0;i<a.length();i++)
  {
      if(i!=ind)
      cout<<a[i];
  } 
  cout<<"\n"; 
return; 
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
/*#ifndef ONLINE_JUDGE
         freopen("in.txt", "r", stdin);
         freopen("output.txt", "w", stdout);
#endif*/
    ll t=1;
    cin>>t;
     
    while(t--) 
    {
        gaurish();
    }
}