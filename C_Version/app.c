#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "CircularQueue.h"

int isRunning = 1 ; 
int choice  ; 
int val ; 
int main(){
    while (isRunning){
        printf("Menu \n[1] Enqueue , [2] Dequeue , [3] Display , [4] Exit \n What would you like to do : ") ; 
        scanf("%d",&choice) ; 
        switch (choice)
        {
        case 1:
            printf("What Number Would you like to enqueue : ") ; 
            scanf("%d",&val) ; 
            enQueue(val) ; 
             wait() ; 
             clear() ; 
            break;
        case 2 :
            deQueue() ; 
             wait() ; 
             clear() ; 
            break ; 
        case 3 : 
            showItem() ;
			 wait() ;  
             clear() ; 
            break ; 
        case 4 : 
            isRunning = 0 ; 
             wait() ; 
             clear() ; 
            break ; 
        default:
            printf("Not Found Your Choice Please try Again") ; 
        	wait() ; 
            clear() ; 
            break;
        }
    }


}
    
