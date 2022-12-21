#include<stdio.h>
int main()
{
int n,temp;
printf("enter the number");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
temp=temp+i*i;
}
printf("%d",temp);
}
