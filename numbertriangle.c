#include<stdio.h>
int main()
{
    int n;
    printf("Enter no. of rows : ");
    scanf("%d", &n);
    // n = 4
    for(int i=1; i<=n; i++)
    { // i = 2        
        for(int j=1; j<=i; j++)
        { // j = 1
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}