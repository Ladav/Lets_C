/****
1)There is a colony of 8 cells arranged in a straight line where each day every cell competes with its adjacent cells(neighbour).
Each day, for each cell, if its neighbours are both active or both inactive, the cell becomes inactive the next day, otherwise it becomes active the next day.
Assumptions:
The two cells on the ends have single adjacent cell, so the other adjacent cell can be assumed to be always inactive.
Even after updating the cell state. consider its pervious state for updating the state of other cells. Update the cell information of all cells simultaneously.
Write a function cell Compete which takes one 8 element array of integers cells representing the current state of 8 cells and one integer days representing the number of days to simulate.
An integer value of 1 represents an active cell and value of 0 represents an inactive cell.
program prototype:
int* cellCompete(int* cells,int days)
*/

#include<stdio.h>
#include<conio.h>

int* cellCompete(int*, int );
void display(int*, int);

void main() {
    // the eight cells who gonna competes with each other
    int cells[8] = {1,1,1,0,1,1,1,1};
    int days;

    // take input from user for cells and number of days
    days = 2;

    display(cells, days);

    // the two cells at the cornors have their outer adjacent cell as inactive allways 0- 1 to 8 -9 --> the 0 and 9 
    // arrays are zero indexed
    cells[-1] = 0;  
    cells[8] = 0;

    cellCompete(cells, days);

        display(cells, days);

}

int* cellCompete(int* cells,int days) {
    // Even after updating the cell state. consider its pervious state for updating the state of other cells. Update the cell information of all cells simultaneously.
    // we can use another array to store previous state temporarily
    int temp[8];
    temp[-1] = 0;
    temp[8] = 0;

    for(int y = 0; y < days; y++) {

        for(int i = 0; i < 8; i++) {
            temp[i] = cells[i];
        }

        for(int x = 0; x < 8; x++) {
            if(temp[x-1] == temp[x+1]) {
                cells[x] = 0;
            }
            else {
                cells[x] = 1;
            }
        }
    }
}

void display(int* cells, int days) {
    for(int i = 0; i < 8; i++) {
        printf("%d\t",cells[i]);
    }
    printf("\ndays:%d\n",days);
}