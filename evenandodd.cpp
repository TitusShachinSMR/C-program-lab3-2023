#include<stdio.h>
int main()
{ int i;int n;
 printf("give the number limit");
 scanf("%d",&n);
 printf("even numbers:\n");
 for(i=1;i<=n;i++)
 { if(i%2==0)
 { printf("%d ",i);
 }
 }
 printf("\n\n\n");
 printf("odd numbers:\n");
 for(i=1;i<=n;i++)
 { if(i%2!=0)
 { printf("%d ",i);
 }
 }
}
