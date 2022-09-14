#include <stdio.h>
#include <stdbool.h>

int r1 = 0, r2 = 0;

void main()
{   
    int ch, val;
    if(false)
    {
        sparse_matrix_dec:
        int sparse1[r1][3];
        int sparse2[r2][3];
        goto create;
    }
    while(true)
    {
        printf("Sparse Array Operations: \n1. Creation");
        printf("\nEnter Choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: creation();
                    break;
            
        }
        exit(0);
    }

}

void creation()
{
    int row1, col1, row2, col2, count1 = 0, count2 = 0;
    int mat1[row1][col1];
    int mat2[row2][col2];
    printf("Size of Matrix 1:");
    scanf("%dx%d",&row1, &col1);
    printf("Size of Matrix 2:");
    scanf("%dx%d",&row2, &col2);

    printf("Enter %d elements for Matrix 1:\n",row1*col1);
    for(int i = 0; i < row1; i++)
    {
        for(int j = 0; j < col1; j++)
        {
            scanf("%d",mat1[i][j]);
            if(mat1[i][j] != 0)
                count1++;
        }
    }
    printf("Enter %d elements for Matrix 2:\n",row2*col2);
    for(int i = 0; i < row2; i++)
    {
        for(int j = 0; j < col2; j++)
        {
            scanf("%d",mat2[i][j]);
            if(mat2[i][j] != 0)
                count2++;
        }
    }
    r1 = count1;
    r2 = count2;
    goto sparse_matrix_dec;
    create:
}