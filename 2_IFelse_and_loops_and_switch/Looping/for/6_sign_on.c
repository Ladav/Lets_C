#include<stdio.h>
#include<string.h>
void sign_on(char *pas)
{
    int i;
    char *temp[20];
    for(i=0;i<3 && strcmp(pas,temp);i++){
        printf("re-enter password :");
        gets(temp);
    }
    if(i<4) printf("\nlogin successful.");
    else printf("\nwrong password try again..");
}

main()
{
    char pas[20];

    printf("Enter password :");
    gets(pas);
    sign_on(pas);
}
