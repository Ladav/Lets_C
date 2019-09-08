#include<stdio.h>
#include<string.h>
char mat[3][3];
char *glo_str=NULL;                                  //pointer to the last String output to console

void init_mat(void);
void get_user(void);
void get_user_numpad();
void get_com(void);
void dis(void);
char check(void);
char* PutStr(const char *);                   /* this function output the string and return the length of the string ,we use this length to erase the string using Erase()
                                                                this function will be used to output generally string (ex- enter any no) that may be frequently and we remove them*/
void Erase(int );                   //Erase(length of string); uses '\b' to remove the previously return output , so that the looks and feels user friendly
int main(void)
{
    char done=' ';

    init_mat();

    for(;;)
    {
            printf("<--------------------Tic-Tac-Toe-------------------->\n");
            printf("You are playing against computer.\n");
            dis();
            get_user_numpad();
            done=check();                                                                               //check if user won
            if(done!=' ') break;
            get_com();
            done=check();                                                                               //check if computer won
            if(done!=' ') break;
            system("cls");
    }
                               {                                                                                                                            //to view the latest results
                                            system("cls");
                                            printf("<--------------------Tic-Tac-Toe-------------------->\n");
                                            printf("You are playing against computer.\n");
                                            dis();
                                }
    if(done=='X'){
        printf("\nYou won this Match!");
    }
    else{
        printf("\nI won!");
    }
}
//initializing matrix
void init_mat(void)
{
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            mat[i][j]=' ';
        }
    }
}
//displaying matrix
void dis(void)
{
    for(int i=0;i<3;i++){
            printf("\t%c  | %c | %c\n",mat[i][0],mat[i][1],mat[i][2]);
            if(i!=2)
                printf("\t--- --- ---\n");
    }
}
// code for PutStr() it returns the length of the string it outputs
char * PutStr(const char *str)
{
    printf("%s",str);
    return (str);
}
//Code for erasing the string
void Erase(int len)
{
    for(int i=0;i<len;i++) printf("\b \b");
}
// playing as computer
void get_com(void)
{
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(mat[i][j]==' ') break;
        }
        if(mat[i][j]==' ') break;
    }
    if(i*j==9){
        printf("This match is a Draw!");
        exit(0);
    }
    else{
        mat[i][j]='O';
    }
}
//To check who is the winner-> the one who had played last will the winner if we had found the pattern and its symbol will be returned
char check(void)
{
    //checking row
    for(int i=0;i<3;i++){
                if(mat[i][0]==mat[i][1] && mat[i][1]==mat[i][2])
                {
                    if(mat[i][0]==' ') continue;                                                                // checking if the whole row contain ' ' so skip it
                    else    return mat[i][0];
                }
    }
    //checking column
    for(int i=0;i<3;i++){
                if(mat[0][i]==mat[1][i] && mat[1][i]==mat[2][i])
                {
                    if(mat[0][i]==' ') continue;                                                                // checking if the whole column contain ' ' so skip it
                    else    return mat[0][i];
                }
    }
    //checking diagonals
                if(mat[0][0]==mat[1][1] && mat[1][1]==mat[2][2])
                {
                    if(mat[0][0]==' ')  ;                                                                                // checking if the whole diagonal contain ' ' so skip it
                    else    return mat[0][0];
                }
                if(mat[2][0]==mat[1][1] && mat[1][1]==mat[0][2])
                {
                    if(mat[2][0]==' ')  ;                                                                                     // checking if the whole diagonal contain ' ' so skip it
                    else    return mat[2][0];
                }
    //if no pattern found
    return ' ';
}
/* i have created to different module for getting user input 1->get_user() it take array[x][y] x,y cords as matrix row and col and choose accordingly
    while second one use the numpad on keyboard as input pad of user */
// fetching response from the user
void get_user(void)
{
    int x,y;
    PutStr("Enter X and Y cord for your move(according to the matrix) :");
    scanf("%d%d",&x,&y);
    x--; y--;
    if(mat[x][y]!=' '){
        printf("Invalid Move, Try Again!\n");
        get_user();
    }
    else{
        mat[x][y]='X';
    }
}

// this module contain code for using numpad as input pad of user
void get_user_numpad(void)
{
    if(glo_str!=NULL){                                                                     //removing invalid value error if occur
        Erase(strlen(glo_str));                                                                     // deallocating pointer
        glo_str=NULL;
    }
    char choice;
    glo_str=PutStr("Enter your move or press backspace to exit (use Numpad):\0");
    choice=getche();
    switch(choice)
    {
        case '\b':   exit(1);                                                              // to exit from game
                            break;

        case '1':if(mat[2][0]==' '){
                            mat[2][0]='X';
                            break;
                        }
                        else
                        {
                            Erase(strlen(glo_str));                                                                                           //erasing the Enter input String  only if an error occur
                            glo_str=NULL;                                                                                                        // deallocating pointer
                            glo_str=PutStr("\nInvalid Move, Try Again!");
                            get_user_numpad();
                            break;
                        }
        case '2':if(mat[2][1]==' '){
                            mat[2][1]='X';
                            break;
                        }
                        else
                        {
                            Erase(strlen(glo_str));                                                                                           //erasing the Enter input String  only if an error occur
                            glo_str=NULL;                                                                                                        // deallocating pointer
                            glo_str=PutStr("\nInvalid Move, Try Again!");
                            get_user_numpad();
                            break;
                        }
        case '3':if(mat[2][2]==' '){
                            mat[2][2]='X';
                            break;
                        }
                        else
                        {
                            Erase(strlen(glo_str));                                                                                           //erasing the Enter input String  only if an error occur
                            glo_str=NULL;                                                                                                        // deallocating pointer
                            glo_str=PutStr("\nInvalid Move, Try Again!");
                            get_user_numpad();
                            break;
                        }
        case '4':if(mat[1][0]==' '){
                            mat[1][0]='X';
                            break;
                        }
                        else
                        {
                            Erase(strlen(glo_str));                                                                                           //erasing the Enter input String  only if an error occur
                            glo_str=NULL;                                                                                                        // deallocating pointer
                            glo_str=PutStr("\nInvalid Move, Try Again!");
                            get_user_numpad();
                        }
        case '5':if(mat[1][1]==' '){
                            mat[1][1]='X';
                            break;
                        }
                        else
                        {
                            Erase(strlen(glo_str));                                                                                           //erasing the Enter input String  only if an error occur
                            glo_str=NULL;                                                                                                        // deallocating pointer
                            glo_str=PutStr("\nInvalid Move, Try Again!");
                            get_user_numpad();
                        }
        case '6':if(mat[1][2]==' '){
                            mat[1][2]='X';
                            break;
                        }
                        else
                        {
                            Erase(strlen(glo_str));                                                                                           //erasing the Enter input String  only if an error occur
                            glo_str=NULL;                                                                                                        // deallocating pointer
                            glo_str=PutStr("\nInvalid Move, Try Again!");
                            get_user_numpad();
                        }
        case '7':if(mat[0][0]==' '){
                            mat[0][0]='X';
                            break;
                        }
                        else
                        {
                            Erase(strlen(glo_str));                                                                                           //erasing the Enter input String  only if an error occur
                            glo_str=NULL;                                                                                                        // deallocating pointer
                            glo_str=PutStr("\nInvalid Move, Try Again!");
                            get_user_numpad();
                        }
        case '8':if(mat[0][1]==' '){
                            mat[0][1]='X';
                            break;
                        }
                        else
                        {
                            Erase(strlen(glo_str));                                                                                           //erasing the Enter input String  only if an error occur
                            glo_str=NULL;                                                                                                        // deallocating pointer
                            glo_str=PutStr("\nInvalid Move, Try Again!");
                            get_user_numpad();
                        }
        case '9':if(mat[0][2]==' '){
                            mat[0][2]='X';
                            break;
                        }
                        else
                        {
                            Erase(strlen(glo_str));                                                                                           //erasing the Enter input String  only if an error occur
                            glo_str=NULL;                                                                                                        // deallocating pointer
                            glo_str=PutStr("\nInvalid Move, Try Again!");
                            get_user_numpad();
                        }

        default:{
                            Erase(strlen(glo_str));                         //erasing the Enter input String  only if an error occur
                            glo_str=NULL;                                          // deallocating pointer
                            glo_str=PutStr("\nInvalid Move, Try Again!");
                            get_user_numpad();
                        }
    }
    glo_str=NULL;                    //if no error occur ,when function will be executed for next move it will be still pointing to enter move string ,so set it to null
}
