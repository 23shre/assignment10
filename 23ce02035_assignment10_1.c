#include<stdio.h>
 union Data
 {
    int x;
    float y;
    char z;
 };
 int main()
 {
    union Data data;
    data.x= 10;
    printf("\nInteger value : %d",data.x);
    data.y = 2.12;
    printf("\nFloat value : %.2f",data.y);
    data.z = 'A';
    printf("\nCharacter value : %c ",data.z);

    //printf("\nInteger value : %d",data.x);
    //printf("\nFloat value : %.2f",data.y);
    //printf("\nCharacter value : %c ",data.z);

    return 0;
 }