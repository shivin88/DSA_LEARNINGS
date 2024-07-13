#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};
int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
};
int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack *ptr, int val)
{
    if (isFull(ptr))
    {
        printf("Stack Overflow!\n");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
int pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack Underflow!Can't pop from stack\n");
        return -1;
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int peek(struct stack * sp,int i)
{
    int arrayind=sp->top -i+1;
    if(arrayind<0)
    {
        printf("not a valid position for stack\n");
        return -1;
    }
    else
    {
        return sp->arr[arrayind];
    }
}
int main()
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    printf("Stack has been created successfully.\n");

    printf("Before pushing ,full: %d\n", isFull(sp));
    printf("Before pushing ,empty: %d\n", isEmpty(sp));
    ;
    push(sp, 8);
    push(sp, 32);
    push(sp, 32);
    push(sp, 32);
    push(sp, 32);
    push(sp, 32);
    push(sp, 32);
    push(sp, 9);
    push(sp, 10);
    push(sp, 2); // pushed 10 values
    // push(sp, 32); //11th element,stack overflow
    printf("The popped element is %d\n", pop(sp));

    printf("After pushing ,full: %d\n", isFull(sp));
    printf("After pushing ,empty: %d\n", isEmpty(sp));
    for (int j = 1;j<=sp->top+1;j++)
    {
    printf("the value at position %d is %d\n",j,peek(sp,j));
    }
    return 0;
}