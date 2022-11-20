
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    //cin>>t;

    while(t--) 
    {
  ll a,b,c;
  cin>>a>>b>>c;
  double s= (a+b+c)/2.0;
  if((a+b)>c && (c+b)>a && (a+c)>b )
 {
     double A=sqrt(s*(s-a)*(s-b)*(s-c));
      cout<<"Valid\n";
     printf("%.8f",A);
 }
  else
  cout<<"Invalid\n";
    }
}
