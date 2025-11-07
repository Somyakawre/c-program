// wap to enter 10 no in a loop and find out biggest num and its pojition
#include <stdio.h>
void main()
{
int no,i=2, big,pos;
printf("entar 10 number");
scanf("%d",&no);
big=no;
pos=1;
while(i<=10)
{
scanf("%d",&no);
if(no>big)
{
big=no;
pos=i;
}
i++;
}
printf("\n biggest no =%d",big);
printf("/n pojition=%d",pos);
}
