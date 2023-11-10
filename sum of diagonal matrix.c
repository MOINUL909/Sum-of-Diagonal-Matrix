
#include<stdio.h>
int main()
{
    int M[3][3],i,j,sum=0;
    printf("Enter the element for the matrix:\n");
    //element of matrix
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("M[%d][%d] = ",i,j);
            scanf("%d",&M[i][j]);
        }
    }

    printf("\n M = \n");
    for(i=0; i<3; i++)
    {

        for(j=0; j<3; j++)
        {
            printf(" %d ",M[i][j]);

        }
        printf("\n");
    }
    printf("Diagonal matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
                printf("%d",M[i][j]);
                sum= sum+M[i][j];
            }
        }
    }
    printf("\n Sum of Diaagonal element = %d\n",sum);

}
