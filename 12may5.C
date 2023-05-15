#include<stdio.h>
#include<conio.h>

void main()
{
   int n,rem=0,rev,temp;
   clrscr();
   printf("enter number:");
   scanf("%d",&n);
   temp=n;
   while(n>0)
   {
    rev=n%10;
    rem=(rem*10)+rev;
    n=n/10;
   }
   if(temp==rem)
   {
    printf("this number is palindrom");
   }
   else
   {
    printf("this number is not palindrom");
   }
   getch();
}

