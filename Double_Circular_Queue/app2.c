#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "DoubleCircularQueue.c"
#include "System.c"

int isRunning = 1; 
int choice; 
int val; 
char input[20]; 

int main() {
    while (isRunning) {
        clear() ; 
        displayMenu();
        printf("Enter your choice: ");
        scanf("%s", input);
        while (getchar() != '\n') ; // Using for get input only one word , with out whitespace  
		clear() ;       
        if (isInt(input)) {
            choice = atoi(input); 
            switch (choice) {
                case 1:
                	displayEF() ; 
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
                	displayER() ;
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
                	displayDF() ; 
                    deQueueFront();
                    break;
                    
                case 4: 
                	displayDR() ;
                    deQueueRear();  
                    break; 
                    
                case 5:
                	displayItem() ;
                    showItem();
                    break;      
                case 6:
                	displayEXIT() ;
                    isRunning = 0;
                    printf("Exiting the program.\n");
                    break;
                    
                default:
                    printf("Invalid choice. Please try again.\n");
                    break;                      
            }
			wait() ; 
		}
        else {
            printf("Invalid input. Please enter a valid integer.\n");
			wait() ; 
		}
    }
}

