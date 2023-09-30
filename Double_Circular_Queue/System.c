#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void clear();
void wait();
int isInt(char *str) ; 
void clear() ;
void wait() ; 

void displayMenu() {
    printf("\n");
    printf("******************* Double Circular Queue *******************\n");
    printf("* [1] Enqueue at Front                                      *\n");
    printf("* [2] Enqueue at Rear                                       *\n");
    printf("* [3] Dequeue from Front                                    *\n");
    printf("* [4] Dequeue from Rear                                     *\n");
    printf("* [5] Display Queue                                         *\n");
    printf("* [6] Exit                                                  *\n");
    printf("*************************************************************\n");
}

void displayEF() {
    printf("\n");
    printf("******************* Double Circular Queue *******************\n");
    printf("* [1] Enqueue at front                                      *\n");
    printf("*                                                           *\n");
    printf("*                                                           *\n");
    printf("*                                                           *\n");
    printf("*                                                           *\n");
    printf("*                                                           *\n");
    printf("*************************************************************\n");
}

void displayER() {
    printf("\n");
    printf("******************* Double Circular Queue *******************\n");
    printf("*                                                           *\n");
    printf("* [2] Enqueue at Rear                                       *\n");
    printf("*                                                           *\n");
    printf("*                                                           *\n");
    printf("*                                                           *\n");
    printf("*                                                           *\n");
    printf("*************************************************************\n");
}

void displayDF() {
    printf("\n");
    printf("******************* Double Circular Queue *******************\n");
    printf("*                                                           *\n");
    printf("*                                                           *\n");
    printf("* [3] Dequeue from Front                                    *\n");
    printf("*                                                           *\n");
    printf("*                                                           *\n");
    printf("*                                                           *\n");
    printf("*************************************************************\n");
}

void displayDR() {
    printf("\n");
    printf("******************* Double Circular Queue *******************\n");
    printf("*                                                           *\n");
    printf("*                                                           *\n");
    printf("*                                                           *\n");
    printf("* [4] Dequeue from Rear                                     *\n");
    printf("*                                                           *\n");
    printf("*                                                           *\n");
    printf("*************************************************************\n");
}

void displayItem() {
    printf("\n");
    printf("******************* Double Circular Queue *******************\n");
    printf("*                                                           *\n");
    printf("*                                                           *\n");
    printf("*                                                           *\n");
    printf("*                                                           *\n");
    printf("* [5] Display Queue                                         *\n");
    printf("*                                                           *\n");
    printf("*************************************************************\n");
}

void displayEXIT(){
	printf("\n");
    printf("******************* Double Circular Queue *******************\n");
    printf("*                                                           *\n");
    printf("*                                                           *\n");
    printf("*                                                           *\n");
    printf("*                                                           *\n");
    printf("*                                                           *\n");
    printf("* [6] Exit                                                  *\n");
    printf("*************************************************************\n");
}

int isInt(char *str) {
    while (*str) {
        if (!isdigit(*str)) {
            return 0; 
        }
        str++;
    }
    return 1; 
}

void clear() {
    system("cls");
}

void wait() {
    system("pause");
}

