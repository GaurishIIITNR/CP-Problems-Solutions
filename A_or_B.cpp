
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0); 
    ll tc;  cin>>tc;
    while(tc--)
     {
        int a,b;
        cin>>a>>b;
        cout<<max(1500-(a*2)-((a+b)*4),1500-((a+b)*2)-(b*4))<<endl;
     }
}