//HHM
// DATE: 19-05-2022
//TIME:22:40:47

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


void hhm()
{
   ll i,j,k; 
   ll n,m;
   cin>>n>>m;
   vector<vector<ll>>v;
   ll arr[n][m];
   for(i=0;i<n;i++){
       vec(ll,a)(m);
       for(j=0;j<m;j++){
           cin>>arr[i][j];
           a[j]=arr[i][j];
       }
       sort(all(a));
       v.pb(a);
   }
   mpp(ll,ll,mp);
   for(i=0;i<n;i++){
       for(j=0;j<m;j++){
          if(arr[i][j]!=v[i][j])
          mp[j]++;
       }
   }
   if(mp.size()==0){
      cout<<1<<" "<<1<<"\n";
      return; 
   }
if(mp.size()==2){
    ll k1,k2;
    bool flag=0;
    for(auto x:mp){
       if(!flag){
           k1=x.first;
           flag=1;
       }
       else k2=x.first;
    }
   for(i=0;i<n;i++){
       if(v[i][k2]!=arr[i][k1]||v[i][k1]!=arr[i][k2]){
           cout<<-1<<"\n";
           return;
       }
   }
   cout<<k1+1<<" "<<k2+1<<"\n";
    return;
}
cout<<-1<<"\n";
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
        hhm();
    }
}



//#ifndef ONLINE_JUDGE
//  freopen("in.txt", "r", stdin);
//	 freopen("output.txt", "w", stdout);
//#endif