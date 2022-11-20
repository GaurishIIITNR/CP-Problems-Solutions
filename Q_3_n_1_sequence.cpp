//🚩HHM🚩
// DATE: 28-05-2022
//TIME:00:12:32

#include<bits/stdc++.h>
using namespace std;

#define       ll long long int
#define       dbl double
#define       deb(v) cout<<#v<<" "<<v<<"\n"
#define       debv(v) cout<<#v<<": "; for(auto x: v) { cout<<x<<" "; } cout<<endl
#define       deb2(v,k) cout<<#v<<" "<<v<<"\n"<<#k<<" "<<k<<"\n"
#define       foi(i,base,n,k) for(i=base;i<n;i+=k)
#define       fod(i,base,n,k) for(i=base;i>=n;i-=k)
#define       vec(type1,name) vector<type1>name
#define       vp(type1,type2,name) vector<pair<type1,type2>>name
#define       st(type,name) set<type>name
#define       mpp(type1,type2,name) map<type1,type2>name
#define       pb push_back
//#define     mp make_pair
#define       fir first
#define       sec second
#define       all(x) x.begin(), x.end()
#define       part(x,a,b) x.begin()+a, x.begin()+b
#define       Pi 3.1415926535897932384626


ll hhm(ll n)
{
//    ll i,j,k; 
   if(n==1)
       return 1;
   
   if(n%2)
      return 1+hhm((3*n)+1);
   else return 1+hhm(n/2);

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll t=1;
    //cin>>t;
     
    while(t--) 
    {  ll n;cin>>n;
        cout<<hhm(n);
    }
}



//#ifndef ONLINE_JUDGE
//  freopen("in.txt", "r", stdin);
//	 freopen("output.txt", "w", stdout);
//#endif
