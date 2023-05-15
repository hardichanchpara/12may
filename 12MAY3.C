#include<stdio.h>
#include<conio.h>

void main()
{
   int i=0,a;
   clrscr();
   printf("enter number :");
   scanf("%d",&a);
   while(a>0)
   {
    a=a/10;
    i=i+1;
   }
   printf("%d",i);
   getch();
}

