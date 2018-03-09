#include<stdio.h>
int main()
{
int i,n,r[20],sum=0;
scanf("%d",&n);
for(i=0;i<=n;i++)
{
scanf("\t%d",&r[i]);
}
for(i=0;i<=n;i++)
{
sum=sum+r[i];
}
printf("%d",sum);
return 0;
}
