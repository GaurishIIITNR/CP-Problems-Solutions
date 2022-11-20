#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{int n;
cin>>n;
while(n--)
{
    ll l,t;
    cin>>l;
    t=l;
    vector<ll>v,v1;
    set<ll>s;
    while(l--)
    {ll u;
        cin>>u;
        v.push_back(u);
    s.insert(u);}
    ll k=v[0];
    for (int i = 1; i < v.size(); i++)
    {
        if(k^v[i]==0)
        {
            cout<<v[i]<<endl;
            break;
        }
        else
        {
            k=k^v[i];
        }
    }
    }}