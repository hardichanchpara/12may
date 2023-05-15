#include<stdio.h>
#include<conio.h>

void main()
{
   int i=0,n,f,l;
   clrscr();
   printf("enter the number:");
   scanf("%d",&n);
   l=n%10;
   while(n>=10)
   {
    n=n/10;
   }
   f=n;
   i=f+l;
   {
    printf("first ndd last no.=%d",i);
   }
   getch();
}

