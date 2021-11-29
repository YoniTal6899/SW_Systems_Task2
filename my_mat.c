#include <stdio.h>
#define MIN(X,Y) (((X) < (Y)) ? (X) : (Y))
#define N 10
#define Infinity 99999999
void funcA(int mat[N][N]){
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; j++)
        {
            scanf(" %d",&mat[i][j]);
            if (mat[i][j] == 0 && i!=j)
            {
                mat[i][j]=Infinity;
            }
                
        }       
    }
}

void funcCHelp(int mat[N][N], int pivot){
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            if (i == j){
                mat[i][j] = 0;
            }
            else if (i == pivot || j==pivot){
                continue;
            }
            else{
                mat[i][j] = MIN(mat[i][j],(mat[i][pivot]+mat[pivot][j]));
            }
        
        }
    
    }
}
void funcC(int mat[N][N]){
    int iC;
    int jC;
    scanf(" %d %d",&iC,&jC);
    for (int i = 0; i < N; i++)
    {
        funcCHelp(mat,i);
    } 
    if (mat[iC][jC] != 0 && mat[iC][jC] != Infinity)
    {
        printf("%d\n",mat[iC][jC]);
    }
    else
    {
        printf("%d\n",(-1));
    }
}

void funcB(int mat[N][N]){
    int i;
    int j;
    scanf(" %d %d",&i,&j);
    for (int i = 0; i < N; i++)
    {
        funcCHelp(mat,i);        
    }
    if (mat[i][j] != 0 && mat[i][j] != Infinity)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
    
}