#include<stdio.h>
union Array
{
    int arr1[10];
    float arr2[10];
    char arr3[10];
};
int main()
{
    union Array arr_union;
    for (int i=0;i<10;i++)
    {
        arr_union.arr1[i]=i+1;
    }
    printf("\nThe integer array is:");
    for(int i=0;i<10;i++)
    {
        printf("%d,",arr_union.arr1[i]);
    }

    for (int j=0;j<10;j++)
    {
        arr_union.arr2[j]=j+0.2;
    }
    printf("\nThe floating array is:");
    for(int j=0;j<10;j++)
    {
        printf("%.2f,",arr_union.arr2[j]);
    }

    for (int k=0;k<10;k++)
    {
        arr_union.arr3[k]='A'+k;
    }
    printf("\nThe character array is:");
    for(int k=0;k<10;k++)
    {
        printf(" %c,",arr_union.arr3[k]);
    }

    return 0;


}



//limitations
//couldn't access character array using %s