#include<stdio.h>
#include<stdlib.h>

struct stack
{
    int top;
    int size;
    int * arr;
};

void printStack(struct stack *s){
    for (int i = 0; i <= s->top; i++)
    {
        printf("%d ",s->arr[i]);
    }
    printf("\n");
    
}
int isEmpty(struct stack * s){
    return s->top == -1;
    
}
int isFull(struct stack * s){
    return s->top == s->size -1;
    
}

void push(struct stack *s , int val){
    if (isFull(s))
    {
        printf("Stack is Full so You can not push the Element\n");
    }
    else{
        s->top++;
        s->arr[s->top] = val;
    }
}
void pop(struct stack *s){
    if (isEmpty(s))
    {
        printf("You can Not POP Element Because the Stack is Empty\n");

    }
    else{
        printf("You POP %d\n",s->arr[s->top]);
        s->top --;
    }
}
int main()
{
   struct stack * s = (struct stack*) malloc (sizeof(struct stack));
   s->top = -1;
   s->size = 8;
   s->arr = (int *) malloc (s->size * sizeof(int));
   int n,val;
    while (1)
    {
        printf("1.Enter For POP\n2.Enter For PUSH\n3.Enter For Print\n4.Enter For Exit\n");
        scanf("%d",&n);
        switch (n)
        {
        case 1:
            pop(s);
            break;
        case 2:
            printf("Enter The value You want To Push\n");
            scanf("%d",&val);
            push(s,val);
            break;
        case 3:
            printStack(s);
            break;
        case 4:
            free(s->arr);
            free(s);
            return 0;
            break;
        
        default:
            printf("You Enter Wrong no.\n");
        }
    }
   return 0;
}