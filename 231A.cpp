#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,sum=0;
cin>>a;
while(a--)
{
	int m,n,o;
	cin>>m>>n>>o;
	if((m==1 && n==1)||(o==1 && n==1)||(m==1 && o==1))
	sum+=1;
	}
	cout<<sum<<endl;
return 0;
}