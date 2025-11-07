// WAP to Enter 20 Characters In A loop ANd count alphabate , digit chars , punctuation char and spaces ??
#include<stdio.h>
#include<ctype.h>
void main()
{char ch;
int i,noa=0, nod=0 , nop =0 , nos=0 ;
printf("\n Enter 20 Characters ");
for(i=1; i<=20 ; i++)
   {
    scanf("%c" ,&ch);    // I/P ghsHSHA273  @#$dfjKk 90(*&
    if(isalpha(ch))
       noa++;
    else if(isdigit(ch))
        nod++;
    else if(ispunct(ch))
        nop++;
    else if(isspace(ch))
        nos++;
   }
printf("\n No Of Alphabate        = %d " ,  noa );
printf("\n No Of Digit Char       = %d " ,  nod );
printf("\n No Of Punctuation Char = %d " ,  nop );
printf("\n No Of Spaces           = %d " ,  nos );
}
