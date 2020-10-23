#include<stdio.h>
int main()
{
    int T,N,m,n,A[100];
    scanf("%d",&T);
    for(m=1; m<=T; m++)
    {
        scanf("%d",&N);

        for( n=1;n<=N;n++)
        {
            A[n]=n;
            printf("%d",A[n]);
        }
    }
}
