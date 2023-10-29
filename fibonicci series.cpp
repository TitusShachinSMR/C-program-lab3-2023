#include<stdio.h>

int f(int x)

{  if(x==1)
    return 1;
   
   else
   {
   if(x==0)
   return 0;}
   
   if(x>=2)
   { int r,o;

   { o=f(r-1)+f(r-2);
   }
   return o;
   }
   } 

int main()
{   int w,y,i;
  printf("the number of fibonicci series you want:");
  scanf("%d",&w);
  for(i=0;i<=w;i++)
  { y=f(i);
    printf("%d\t",y);
  }
  
}
