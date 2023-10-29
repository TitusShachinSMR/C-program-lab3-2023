#include<stdio.h>
#include<math.h>
int main()
{ int x;int i;int sum=0;int m;
 printf("please enter the integer");
  scanf("%d",&x);
  int y=log(x)/log(10);
  for(i=1;i<=y+1;i++)
  {  m=x%10;
    sum=sum+(pow(10,y+1-i)*m);
     x=x/10;
  }
  printf("reverse=%d",sum);}
