#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    //cin>>t;
    char a;
   vector<ll>v;
    while(cin>>a) 
    {
     if(a!='+')
     v.push_back(a);
    }
    sort(v.begin(),v.end());
    for(ll i=0;i<v.size();i++)
    {
        cout<<char(v[i]);
        if(i!=(v.size()-1))
        cout<<'+';
    }
}
