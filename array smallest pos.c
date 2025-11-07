// wap to find out smallest and its position from array of 10 element
#include<stdio.h>
void main()
{
    int x[10],small,i=0,pos=0;
    printf("\n enter array x");
    scanf("%d,&x[i]");
    small=x[0];
    pos=i+1;
    for(i=1;i<10;i++)
    {
        scanf("%d",&x[i]);
    if (small>x[i])
    {
        small=small;
        pos=i+1;
    }
    }
    printf("\n smallest element= %d and position=%d",small,pos);
}
