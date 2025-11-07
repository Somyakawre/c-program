// wap to calculate average of arry using fn and return it
#include<stdio.h>
void main()
{
int x[10],i;
float avg(int*);
printf("\n enter array x in main()fn");
for(i=0;i<10;i++)
    scanf("%d",&x[i]);
printf("Average=%f",avg(x));
}
float avg (int*p)
{
    int i,sum=0;
    printf("\n array element in show ()fn");
    for(i=0;i<10;i++)
        sum=sum+p[i];
    return sum/10.0;
}
