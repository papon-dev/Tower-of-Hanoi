#include<stdio.h>
#include<math.h>
void towers(int,char,char,char);
int main()
{
    int n,m;
    printf("\n  Enter the number of disks : ");
    scanf("%d",&n);
    m=pow(2,n)-1;
    printf("\n  The sequence of total movements are : %d\n",m);
    towers(n,'A','B','C');
    return 0;
}
void towers(int n,char from,char aux,char destination)
{
   if(n<0)
   {
       printf("\n  Illegel disk number\n");
   }
   if(n>=1)
   {
       towers(n-1,from,destination,aux);
       printf("\n  Move disk %d from %c to %c \n",n,from,destination);
       towers(n-1,aux,from,destination);
   }
}
