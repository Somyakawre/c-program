// refrancce long int power (int* ,int*)
# include<stdio.h>
void main()
{
int x ,y;
long int power(int*,int*);
printf("enter x & y");
scanf("%d%d",x,y);
power(&x,&y);
printf(" \n power =%ld",power(x,y));

}

 long int power (int *a,int *b)
{
    int i;
    long int p=1;
    for(i=1;i<=*b;i++)
        p=p**a;

}


