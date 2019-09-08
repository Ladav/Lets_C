#include<stdio.h>

struct fraction
{
    int num;
    int deno;
};

struct fraction add_frac(struct fraction,struct fraction);

int main(void)
{
    struct fraction f1={2,3};
    struct fraction f2={4,5};
    struct fraction res;
    res = add_frac(f1,f2);
    printf("On addition %d/%d + %d/%d = %d/%d",f1.num,f1.deno,f2.num,f2.deno,res.num,res.deno);
    return 0;
}

struct fraction add_frac(struct fraction f1,struct fraction f2)                         //pass by value
{
    struct fraction r;
    r.num=(f1.num * f2.deno)+(f2.num * f1.deno);
    r.deno=(f1.deno*f2.deno);
    return r;
}

