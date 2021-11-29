#include <stdio.h>
#include "my_mat.h"
#define N 10

int main()
{
    int mat[N][N];
    char action;
    scanf("%c",&action);
    while ('D'!=action)
    {
        switch (action)
        {
        case 'A':
            funcA(mat);
            scanf(" %c",&action);
            break;
        case 'B':
            funcB(mat);
            scanf(" %c",&action);
            break;
        case 'C':
            funcC(mat);
            scanf(" %c",&action);
            break;
                
        default:
            return 0;
        }
    }
    
    return 0;
}