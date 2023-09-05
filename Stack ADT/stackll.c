#include <stdio.h>
#include <stdlib.h>

struct node{
    char data;
    struct node *next;
};

struct stack
{
    struct node *top;
    int size;
};

void create(struct stack *s)
{
    s->top = NULL;
    s->size = 0;
}

void push(struct stack *s, char x)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = x;
    temp->next = s->top;
    s->top = temp;
    s->size++;    
}

char pop(struct stack *s)
{
    if(s->size == 0)
    {
        printf("Stack is empty");
        return '\0';
    }
    struct node *temp = s->top;
    char popData = temp->data;
    s->top = temp->next;
    free(temp);
    s->size--;
    return popData;
}

char peek(struct stack *s)
{
    if(s->size == 0)
    {
        printf("Stack is empty");
        return '\0';
    }
    return s->top->data;
}

int isEmpty(struct stack *s)
{
    return s->size == 0;
}

int getSize(struct stack *s)
{
    return s->size;
}


