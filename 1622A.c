#include <stdio.h>
 
int main()
{
	int t,a,b,c,x,y,z;
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
  {
   scanf("%d%d%d",&a,&b,&c);
{
	if(a>=b && a>=c)
 {x=a;
 	if(b>c)
 	{y=b;z=c;}
 	else
 	{y=c;z=b;}
 	}
else if(b>=a && b>=c)
 {x=b;
 	if(a>c)
 	{y=a;z=c;}
 	else
 	{y=c;z=a;}
 	}
else if(c>=b && a<=c)
 {x=c;
 	if(b>a)
 	{y=b;z=a;}
 	else
 	{y=a;z=b;}
 	}
 	}
 	if(x==y+z)
 	printf("YES\n");
 	else if((x==y)&&(z%2==0))
 	printf("YES\n");
 	 	else if((y==z)&&(x%2==0))
 	printf("YES\n");
 	else
 	printf("NO\n");
 //printf("%d %d %d\n",x,y,z);
 }
	return 0;
}