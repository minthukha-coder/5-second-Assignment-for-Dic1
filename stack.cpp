//
// Created by User on 31/12/2022.
//
#include"stdio.h"
#include"stdlib.h"
#define MAXOFSTACK 10

int toCount = 0;
struct stack{
    int data[MAXOFSTACK];
    int top;
};

typedef struct stack st;

void create_emptyStack(st * myStack){
    myStack->top = -1;
}

int isStackIsFull(st * myStack){
    if (myStack->top == MAXOFSTACK-1){
        return 1;
    }else{
        return 0;
    }
}


void display(st *myStack){

    printf("All data in stackMemory = %d\n",toCount);
    for (int i = 0;i < toCount;i++){
        printf("Data: %d :\n",myStack->data[i]);
    }

}


void pushToStack(st * myStack,int value){
    if (isStackIsFull(myStack)){
        printf("Stack is Full");
    }else{
        myStack->top++;
        myStack->data[myStack->top] = value;
    }
    toCount++;
    display(myStack);
}


int isStackIsEmpty(st * myStack){
    if (myStack->top == -1){
        return 1;
    }else{
        return 0;
    }
}

void popFromStack(st * myStack){
    if (isStackIsEmpty(myStack)){
        printf("Stack is Empty");
    }else{
        printf("\nPopped data from stack = %d\n",myStack->data[myStack->top]);
        myStack->top--;
    }
    toCount--;
    display(myStack);
}

int main(){

    st * myStack = (st *)malloc(sizeof(st));
    create_emptyStack(myStack);

    pushToStack(myStack,10);
    pushToStack(myStack,11);
    pushToStack(myStack,12);
    pushToStack(myStack,13);
    pushToStack(myStack,14);

    popFromStack(myStack);
    popFromStack(myStack);
    popFromStack(myStack);
    popFromStack(myStack);
    popFromStack(myStack);


}
