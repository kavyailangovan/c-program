#include <stdio.h>
int main()
{
    int i,j,n;
    i=3;
    j=1;
    for(j=1;j<=12;j++)
    {
        n=i*j;
        printf("%d * %d = %d\n",i,j,n);
    }
    return 0;
}