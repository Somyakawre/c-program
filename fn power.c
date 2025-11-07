//long int power (int,int)
#include<stdio.h>
void main()
{
    int x,y,i;
    long int p=1;
    long int power(int,int);
    printf("enter x and y");
    scanf("%d%d",&x,&y); // 2   5
    printf("power=%ld",power(x,y)  );   // calling

}
   long int power (int x ,int y  )
   {
    int i;
    long int p=1;
    for(i=1;i<=y;i++)
        p=p*x;
    return p;
   }
