#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
  ll a,b;
  cin>>a>>b;
  if(b<=(a+1)/2)
      cout<<1+((b-1)*2);
     else
     cout<<2+((b-((a+1)/2)-1)*2);
}