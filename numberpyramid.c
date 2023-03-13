#include<stdio.h>
int main()
{
    int n;
    printf("Enter no. of rows : ");
    scanf("%d", &n);
    int nst = 1;
    int nsp = 3;
    for(int i=1; i<=n; i++)
    {
        for(int k=1; k<=nsp; k++)
        { // for spaces
            printf(" ");
        }
        nsp = nsp - 1;
        for(int j=1; j<=nst; j++)
        {
            printf("%d", j);
        }
        nst = nst + 2;
        printf("\n");
    }
    return 0;
}