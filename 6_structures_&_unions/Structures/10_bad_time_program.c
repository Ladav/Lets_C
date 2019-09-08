#include<stdio.h>
#include<conio.h>
#define DELAY 358000000
struct time
{
        int sec;
        int min;
        int hour;
};

void display(struct time*);
void update(struct time*);
void delay();

int main(void)
{
    struct time t={0,0,0};

    for(;;)
    {
        update(&t);
        display(&t);
    }
    return 0;
}
void update(struct time *t)
{
    t->sec++;
    if(t->sec==60){
        t->sec=0;
        t->min++;
    }
    if(t->min==60){
        t->min=0;
        t->hour++;
    }
    if(t->hour==24)
        t->hour=0;
    delay();
    system("cls");                      //equivalent to clearscreen clrscr() in turboc
}
void delay(void)
{
    for(long int i=0;i<DELAY;i++);
}
void display(struct time *t)
{
    printf(" hh:mm:ss \n %02d:%02d:%02d",t->hour,t->min,t->sec);                    //if you use %2d directly then o/t-> _0:_1:44 and with %02d o/t -> 00:01:44
}
