
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
  double a,b,c,d,e,f;
  cin>>a>>b>>c>>d>>e>>f;
  //cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<endl;
  if((b==d)&&(b!=0))
  printf("%.9f\n",abs(a-c));
  else if((f==d)&&(f!=0))
  printf("%.9f\n",abs(e-c));
  else if((b==f)&&(f!=0))
  printf("%.9f\n",abs(a-e)); 
  else
  printf("%.11f\n",(0.0));

//return; 
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
