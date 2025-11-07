// WAP to Calculate Average Of Array
#include<stdio.h>
void main()
{
  int x[10] , i  , sum =0 ;
  printf("\n Enter Array X ");
  for(i=0;i<10;i++)
     {
     scanf("%d" ,&x[i]);  // 12  5  15 4  67  -------------
     sum = sum + x[i] ;
     }

   printf("\n Average =   %f" ,  sum/10.0 );
}
