#include<stdio.h>
int main()
{ 
   int prc,sum,res,v,n;
   sum=0;
   prc=1;
   scanf("%d",&n);
   while(n!=0)
   { v=n%10;
     sum=sum+v;
     prc=prc*v;
     n=n/10;
   }
   res=prc-sum;
   printf("%d",res);
   return 0;
}