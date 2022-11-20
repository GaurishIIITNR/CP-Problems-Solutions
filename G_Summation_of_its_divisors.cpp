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
    ll a;
    cin>>a;
    ll sm=0;
    for(int i=1; i<=a;i++)
       {if(a%i==0)
       sm+=i;}
       cout<<sm;
    }
}
