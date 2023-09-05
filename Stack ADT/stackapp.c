#include<stdio.h>
#include<stdlib.h>
#define IS 1000

struct stack{
	char *arr;
	int size;
	int capacity;
};


void create(struct stack *s){
	s->arr=(char*)(malloc(sizeof(char)*IS));
	s->size=0;
	s->capacity=IS;
}

void push(struct stack *s, char x){
	if(s->size==s->capacity){
		printf("Stack is full");
		return ;
	}
	s->arr[s->size]=x;
	s->size++;
}

char pop(struct stack *s){
	if(s->size==0){
		printf("Stack is empty");
		return '\0';
	}
	char toPOP= s->arr[s->size-1];
	s->size--;
	return toPOP;
}

char peek(struct stack *s){
	if(s->size==0){
		printf("Stack is empty");
		return '\0';
	}
	return s->arr[s->size-1];
}

int isEmpty(struct stack *s){
	return s->size == 0;
}

int getSize(struct stack *s){
	return s->size;
}

//code checking capacity of stack

