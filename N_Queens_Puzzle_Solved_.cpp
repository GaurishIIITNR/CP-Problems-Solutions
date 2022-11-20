#include<bits/stdc++.h>
#define ll long long int
using namespace std;
double power(double a,ll b)
{
    double c=1;
    for(ll i=1;i<=b;i++){
      c*=a;
    }
    return c;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    cin>>t;

    while(t--) 
    {
    ll a;
    cin>>a;
    double b= power(((0.143)*a),a);
    if((b-floor(b)<0.5))
    cout<<floor(b)<<"\n";
    else
    cout<<floor(b)+1<<"\n";
    }
}
