#include<stdio.h>
int main()
{
    int n;
    printf("Enter no. of lines : ");
    scanf("%d", &n);
    // ABCDEFG
    // ABC EFG
    // AB   FG
    // A     G
    // n = 4
    int nst = n;
    int nsp = 1;
    for(int i=1; i<=2*n+1; i++)
    { // pehli line
            int d = i + 64;
            char ch = (char) d;
            printf("%c", ch);
    }
    printf("\n");
    for(int i=1; i<=n; i++)
    {
        int a = 1;
        for(int j=1; j<=nst; j++)
        { // alphabets
            int d = a + 64;
            char ch = (char) d;
            printf("%c", ch);
            a++;
        }
        for(int k=1; k<=nsp; k++)
        { // spaces
            printf(" ");
            a++;
        }
         for(int j=1; j<=nst; j++)
        { // alphabets
            int d = a + 64;
            char ch = (char) d;
            printf("%c", ch);
            a++;
        }
        nst--;
        nsp += 2;
        printf("\n");
    }
    return 0;
}