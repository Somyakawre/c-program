// wap to calculate factorial of no
#include<stdio.h>
void main()
{
int no;
long int f=1;
printf("enter any no");
scanf("%d",&no);
while(no>1)
{
f=f*no;
no--;
}
printf("\n factorial=%ld",f);
}
