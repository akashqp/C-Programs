#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void Creation();
void Addition();
void Subtraction();
void Multiplication();
void Transpose();
void Display();

int flag = 0, flag1 = 0;

void main()
{
    int row1, col1, row2, col2, ch;
    printf("Enter size of Matrix 1: ");
    scanf("%dx%d",&row1,&row2);
    printf("Enter size of Maatrix 2: ");
    scanf("%dx%d",&col1,&col2);
    int mat1[row1][col1];
    int mat2[row2][col2];
    int mat3[row1][col2];
    int mat4[col1][row1];
    int mat5[col2][row2];
    
    while(true)
    {
        printf("\n2-D Array Operations: \n1.Matrix Creation \n2.Addition \n3.Subtraction \n4.Multiplication \n5.Transpose \n6.Display \n7.Exit \n\n");
        printf("Enter choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: Creation(mat1, mat2, row1, col1, row2, col2);
                    break;
            case 2: Addition(mat1, mat2, mat3, row1, col1, row2, col2);
                    break;
            case 3: Subtraction(mat1, mat2, mat3, row1, col1, row2, col2);
                    break;
            case 4: Multiplication(mat1, mat2, mat3, row1, col1, row2, col2);
                    break;
            case 5: Transpose(mat1, mat2, mat4, mat5, row1, col1, row2, col2);
                    break;
            case 6: Display(mat1, mat2, mat3, mat4, mat5, row1, col1, row2, col2);
                    break;
            case 7: exit(0);
            
            default:printf("Invalid Choice\n");
        }
    }
}

void Creation(int *mat1,int *mat2, int row1, int col1, int row2, int col2)
{
    printf("Enter %d elements for Matrix 1:\n",row1*col1);
    for(int i = 0; i < row1; i++)
    {
        for(int j = 0; j < col1; j++)
        {
            scanf("%d",mat1++);
        }
    }
    printf("Enter %d elements for Matrix 2:\n",row2*col2);
    for(int i = 0; i < row2; i++)
    {
        for(int j = 0; j < col2; j++)
        {
            scanf("%d",mat2++);
        }
    }
}

void Addition(int *mat1,int *mat2, int *mat3, int row1, int col1, int row2, int col2)
{
    if(row1 != row2 || col1 != col2)
    {
        printf("Addition Operation not Possible\n");
        return;
    }
    for(int i = 0; i < row1; i++)
    {
        for(int j = 0; j < col1; j++)
        {  
            *(mat3 + i*col1 + j) = *(mat1 + i*col1 + j) + *(mat2 + i*col1 + j);
        }
    }
    flag1 = 1;
}

void Subtraction(int *mat1,int *mat2, int *mat3, int row1, int col1, int row2, int col2)
{
    if(row1 != row2 || col1 != col2)
    {
        printf("Subtraction Operation not Possible\n");
        return;
    }
    for(int i = 0; i < row1; i++)
    {
        for(int j = 0; j < col1; j++)
        {  
            *(mat3 + i*col1 + j) = *(mat1 + i*col1 + j) - *(mat2 + i*col1 + j);
        }
    }
    flag1 = 1;
}

void Multiplication(int *mat1,int *mat2, int *mat3, int row1, int col1, int row2, int col2)
{
    if(row2 != col1)
    {
        printf("Multiplication Operation not Possible\n");
        return;
    }
    for(int i = 0; i < row1; i++)
    {
        for(int j = 0; j < col2; j++)
        {  
            *(mat3 + i*col2 + j) = 0;
            for(int k = 0; k < col2; k++)
            {
                *(mat3 + i*col2 + j) =  *(mat3 + i*col2 + j) + ((*(mat1 + i*col2 + k) * (*(mat2 + k*col2 + j))));
            }
        }
    }
    flag1 = 1;
}

void Transpose(int *mat1,int *mat2, int *mat4, int *mat5, int row1, int col1, int row2, int col2)
{
    for(int i = 0; i < row1; i++)
    {
        for(int j = 0; j < col1; j++)
        {
            *(mat4 + j*col1 + i) = *(mat1 + i*col1 + j);
        }
    }
    for(int i = 0; i < row2; i++)
    {
        for(int j = 0; j < col2; j++)
        {
            *(mat5 + j*col1 + i) = *(mat1 + i*col1 + j);
        }
    }
    flag = 1;
}

void Display(int *mat1,int *mat2, int *mat3, int *mat4, int *mat5, int row1, int col1, int row2, int col2)
{
    if(flag == 1)
    {
        flag = 0;
        printf("\nTranspose of Matrix 1\n");
        for(int i = 0; i < col1; i++)
        {
            for(int j = 0; j < row1; j++)
            {
                printf("%d\t",*mat4++);
            }
            printf("\n");
        }
        printf("\nTranspose of Matrix 2\n");
        for(int i = 0; i < col2; i++)
        {
            for(int j = 0; j < row2; j++)
            {
                printf("%d\t",*mat5++);
            }
            printf("\n");
        }
        return;
    }
    printf("\nMatrix 1:\n");
    for(int i = 0; i < row1; i++)
    {
        for(int j = 0; j < col1; j++)
        {
            printf("%d\t",*mat1++);
        }
        printf("\n");
    }
    printf("\nMatrix 2:\n");
    for(int i = 0; i < row2; i++)
    {
        for(int j = 0; j < col2; j++)
        { 
            printf("%d\t",*mat2++);
        }
        printf("\n");
    }
    if(flag1 == 0)
        return;
    printf("\nMatrix 3:\n");
    for(int i = 0; i < row1; i++)
    {
        for(int j = 0; j < col2; j++)
        {
            printf("%d\t",*mat3++);
        }
        printf("\n");
    }
}