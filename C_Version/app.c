#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "CircularQueue.h"

int isRunning = 1 ; 
int choice  ; 
int val ; 
char input[200] ; 

int main() {
    while (isRunning) {
        printf("Menu \n[1] Enqueue , [2] Dequeue , [3] Display , [4] Exit \n What would you like to do : ");
        char input[20]; 
        scanf("%s", input);
        if (isInt(input)) {
            choice = atoi(input); 
            switch (choice) {
                case 1:
                    printf("What Number Would you like to enqueue : ");
                    scanf("%s", input);
                    if (isInt(input)) {
                        val = atoi(input);
                        enQueue(val);
                        wait();
                        clear();
                    } else {
                        printf("Invalid input. Please enter a valid integer.\n");
                        wait();
                        clear();
                    }
                    break;
                case 2:
                    deQueue();
                    wait();
                    clear();
                    break;
                case 3:
                    showItem();
                    wait();
                    clear();
                    break;
                case 4:
                    isRunning = 0;
                    wait();
                    clear();
                    break;
                default:
                    printf("Not Found Your Choice. Please try Again\n");
                    wait();
                    clear();
                    break;
            }
        } else {
            printf("Invalid input. Please enter a valid integer.\n");
            wait();
            clear();
        }
    }
}
    