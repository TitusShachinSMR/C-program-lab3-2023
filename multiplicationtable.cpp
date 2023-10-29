#include<stdio.h>
#include<math.h>
int main()
{ int x;int i,j;
printf("enter the table limit:");
scanf("%d",&x);
for(i=1;i<=x;i++)
{ for(j=1;j<=x;j++)
{ printf("%2d  ",i*j);
}
printf("\n");
}
}
