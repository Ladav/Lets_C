#include"stdio.h"
#define max 100

void push(double);
double pop(void);
double gettop(void);
double getint(char);
char charstac[max];
double stac[max];
int counter=0;

int main()
{
    char sym;
    double res;
    int i=0;

    printf("the calculator is using reverse polish scheme so Enter a series of operations like this (2+3*4) one literal at a time.->\n");

    while((charstac[i]=getchar())!='\n')
        i++;
        i=0;
    while(1)
    {
        sym=charstac[i];
        i++;
        switch(sym)
    {
        case '*': res =(pop() * pop());
                       push(res);
                       gettop();
                       break;
        case '/': res =(pop() / pop());
                       push(res);
                       gettop();
                       break;
        case '-': res =(pop() - pop());
                       push(res);
                       gettop();
                       break;
        case '+': res =(pop() + pop());
                       push(res);
                       gettop();
                       break;
        default:
            res=getint(sym);
            push(res);

            break;
        case '\n':
            printf("result %lf",res);
            return 0;
    }
    }
}


void push(double nu)
{
    stac[counter]=nu;
    counter++;
}
double pop(void)
{
    double temp;
    temp=stac[counter];
    counter--;
    return temp;
}
double gettop(void)
{
    printf("\nTop:%0.2lf\n",stac[counter]);
}
double getint(char ch)
{

    return (ch-48);
}
