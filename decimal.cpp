#include<stdio.h>
#include<math.h>
int main()
{ int i,j,n;
printf("enter the number");
scanf("%d",&n);
int y=log(n)/log(2);
int a[y+1];
for(i=1;i<=y+1;i++)
{ a[y+1-i]=n%2;
   n=n/2;
}
for(i=0;i<=y;i++)
{printf("%d ",a[i]);}


}
