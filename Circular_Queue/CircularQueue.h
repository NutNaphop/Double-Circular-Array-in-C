#include<stdio.h>
#include<stdlib.h>
#define SIZE 5 

int items[SIZE]; 
int front = -1 , rear = -1;

int enQueue(int data) ; 
int deQueue() ; 
int showItem() ;
int isFull() ; 
int isEmpty() ; 
int isInt() ; 
void clear() ; 
void wait() ; 

int enQueue(int data){
    if (isFull()){
        printf("Overflow\n") ; 
        return 0 ; 
    }
    if (front == -1) front = 0  ; 
    rear = (rear + 1 ) % SIZE ; 
    items[rear] = data ; 
    printf("Enqueue %d Complete\n",items[rear]) ; 
    
}

int deQueue(){
    if (isEmpty()){
        printf("Underflow\n") ; 
        return 0 ; 
    }
    printf("Dequeue item : %d",items[front]) ; 
    printf(" Dequeue Complete !\n") ;
    if (front == rear){
        front = -1 ;
        rear = -1 ;    
    }
    else {
        front = (front + 1) % SIZE ; 
    }
    
}

int showItem(){
	int i = 0 ; 
	printf("\nFront -> %d\n",front) ;   
    for (i = front ; i != rear ; i = (i+1)%SIZE){   	
     	printf("%d ",items[i]);	    	
	}
	(front == -1 && rear == -1) ? printf("Empty") : printf("%d ",items[i]);
	printf("\nRear -> %d\n",rear) ;     
    }
		   

int isFull(){
   if (front == rear + 1){
        return 1 ; 
   }
   if (front == 0 && rear == SIZE - 1){
        return 1 ; 
   }
   return 0 ; 
}   

int isEmpty(){
    if (front == -1 && rear == -1){
        return 1 ; 
    }
    return 0 ; 
}

int isInt(char *str){
	while (*str) {
        if (!isdigit(*str)) {
            return 0; 
        }
        str++;
    }
    return 1 ; 
}

void clear(){
	system("cls"); 
}

void wait(){
	system("pause") ; 
}

