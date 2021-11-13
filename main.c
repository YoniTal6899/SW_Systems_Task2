#include <stdio.h>
#include "my_mat.h"

int main()
{
    char action;
    int value;
    scanf("%c", &action);
    while(action!='D')
    {
        switch (action)
        {
        case 'A':
            scanf("%c", &action);
            break;
        case 'B':
            scanf("%c", &action);
            break;
        case 'C':
            scanf("%c", &action);
            break;
        case 'D':
            return 0;        
        default:
            printf("Invalid Input! Enter action");
            scanf("%c", &action);
        }
    }
    return 0;
}