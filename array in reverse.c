// WAP to PRINT Array In Reverse Order
#include<stdio.h>
void main()
{
  int x[10] , i  ;
  printf("\n Enter Array X ");
  for(i=0;i<10;i++)
     scanf("%d" ,&x[i]);  // 12  5  15  4  67  3  45  7  1  100
  printf("\n Forword Array  ");
  for(i=0;i<10;i++)
      printf("    %d"  , x[i]);   // 12  5  15  4  67  3  45  7  1  100

  printf("\n Reverse Array  ");
  for(i=9;i>=0 ;i--)
      printf("    %d"  , x[i]);    //  100  1   7   45   3  -------------
}

