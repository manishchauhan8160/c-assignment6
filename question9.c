#include<stdio.h>
int main()
{
int x,y,i;
printf("enter the two no for lcm");
scanf("%d%d",&x,&y);
for(i=x>y?x:y;i<=x*y;i++)
{
if(i%x==0&&i%y==0)
break;
}
printf(" lcm is %d",i);
}
