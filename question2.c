#include<stdio.h>
int main()
{
int n,temp;
printf("enter the number");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
if(i%2==0)
temp=temp+i;
}
printf("%d",temp);
}
