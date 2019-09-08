#include<stdio.h>

int main(void)
{
    struct bmw
    {
        char model[10];
        int price;
        float mileage;
    };
    struct car
    {
        struct bmw bmw;
    }c;

    c.bmw.price=7867;
    c.bmw.mileage=3.4;
    gets(c.bmw.model);
    printf("model = %s \t price %d \t mileage %f",c.bmw.model,c.bmw.price,c.bmw.mileage);


    return 0;
}
