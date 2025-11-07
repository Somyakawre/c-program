// wap void table(int*) refrance
#include<stdio.h>
void main()
{
 int num;
void table(int*);//prototype
 printf("enter num ");
 scanf("%d",&num);  // 5
 table(num);
}


void table(int *n)
{
  int a=1;

 while(a<=10)
 {printf("\n %d",*n*a);
 a++;
 }
}

