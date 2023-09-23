#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "DoubleCircularQueue.h"

int isRunning = 1; 
int choice; 
int val; 
char input[20]; 

void displayMenu() {
    printf("\n");
    printf("******************* Double Circular Queue *******************\n");
    printf("* [1] Enqueue at Front                                      *\n");
    printf("* [2] Enqueue at Rear                                       *\n");
    printf("* [3] Dequeue from Front                                   *\n");
    printf("* [4] Dequeue from Rear                                    *\n");
    printf("* [5] Display Queue                                        *\n");
    printf("* [6] Exit                                                 *\n");
    printf("*************************************************************\n");
}

int main() {
    while (isRunning) {
        clear() ; 
        displayMenu();
        printf("Enter your choice: ");
        scanf("%s", input);
        if (isInt(input)) {
            choice = atoi(input); 
            switch (choice) {
                case 1:
                    printf("Enter the number you want to enqueue at the front: ");
                    scanf("%s", input); 
                    if (isInt(input)) {
                        val = atoi(input);
                        enQueueFront(val);
                    } 
					else {
                        printf("Invalid input. Please enter a valid integer.\n");
                    }
                    break;
                case 2: 
                    printf("Enter the number you want to enqueue at the rear: ");
                    scanf("%s", input); 
                    if (isInt(input)){
                        val = atoi(input);
                        enQueueRear(val);
                    } 
					else {
                        printf("Invalid input. Please enter a valid integer.\n");
                    }
                    break;
                    
                case 3:
                    deQueueFront();
                    break;
                    
                case 4: 
                    deQueueRear();  
                    break; 
                    
                case 5:
                    showItem();
                    break;      
                case 6:
                    isRunning = 0;
                    printf("Exiting the program.\n");
                    break;
                    
                default:
                    printf("Invalid choice. Please try again.\n");
                    break;
                                        
            }
			wait() ; 
			while (getchar() != '\n') ; // Using for get input only one word , with out whitespace
		}
        else {
            printf("Invalid input. Please enter a valid integer.\n");
			wait() ; 
			while (getchar() != '\n') ; // Using for get input only one word , with out whitespace
		}
    }
}

