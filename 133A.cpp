#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
 string a;
cin>>a;
int cnt=0;
 for(int i=0;i<a.size();i++)
 {
     if(a[i]=='H'||a[i]=='Q'||a[i]=='9')
     cnt++;
 }
 if(cnt>0)
 cout<<"YES";
 else 
  cout<<"NO";
}