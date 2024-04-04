#include<stdio.h>
struct MyData1
{
    int int1;
    int int2;
    char ch1;
};
union MyData2
{
    int int1;
    int int2;
    char ch1;
};
int main()
{
    printf("\nSize of the structure MyData1 : %d",sizeof(struct MyData1));
    printf("\nSize of the union MyData2 : %d",sizeof(union MyData2));
    return 0;
}