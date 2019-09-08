#include<stdio.h>

struct emps
{
    char name[15];
    int id;
    float salary;
};
union empu
{
    char name[15];
    int id;
    float salary;
};
void main(void)
{
    struct emps s;
    union empu u;
    printf("the size of union variable is : %d  and the size of identical structure variable is :%d \n"
           "when the size of char->%d,int->%d,float->%d",sizeof(u),sizeof(s),sizeof(char),sizeof(int),sizeof(float));
}
