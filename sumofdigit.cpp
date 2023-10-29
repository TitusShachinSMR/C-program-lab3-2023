#include<stdio.h>
int main()
{  int x,y;
int sum=0;
 printf("please enter the number:");
 scanf("%d",&x);
 while(x!=0)
 {  y=x%10;
    sum = sum+y;
    x=x/10;
 }
 printf("%d",sum);
}
