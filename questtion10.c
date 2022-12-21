#include<stdio.h>
int main()
{
int n,temp=0,x;
printf("enter the number");
scanf("%d",&n);
while(n){
x=n%10;
temp=temp*10+x;
n=n/10;
}
printf("%d",temp);
}
