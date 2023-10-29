#include<stdio.h>
int main()
{ int a,i;
int fact=1;
printf("please enter the number to find factorial\n");
scanf("%d",&a);
for(i=1;i<=a;i++)
{ fact=fact*i;
}
printf("%d",fact);
}
