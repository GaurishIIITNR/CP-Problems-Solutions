#include <bits/stdc++.h>
using namespace std;


int main()
{
 int n,k;
 cin>>n>>k;
 int cnt=0;
 for(int i=0;i<n;i++)
 {
   int d;
   cin>>d;
   if(d>k)
   cnt+=2;
   else
   cnt+=1;
  }
  cout<<cnt;
}