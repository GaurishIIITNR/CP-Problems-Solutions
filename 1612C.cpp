#include <bits/stdc++.h>
using namespace std;

//Compiler version g++ 6.3.0
double rootc(long long int a, long long int b, long long int c){
  double d=sqrt((b*b)-(4*a*c))-b;
  d/=(2.0*a);
  return d;
}
int main()
{
   long long int t;cin>>t;
   while(t--){
     long long int n ,k;
     cin>>n>>k;
     if(n*n<=k){
       cout<<(2*n)-1<<"\n";
       continue;
     }
    
     if((n*(n+1))>=2*k){
      double r=rootc(1,1,-(2*k));
      cout<<(long long int)ceil(r)<<"\n";
      continue;
     }
     else {
       k-=(n*(n+1))/2;
       double r=rootc(-1,(2*n)-1,-(2*k));
       long long int res=n+ceil(r);
       cout<<res<<"\n";
       continue;
     }
   }
}