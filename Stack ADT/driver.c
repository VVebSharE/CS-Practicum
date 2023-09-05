#include<stdio.h>
int main(){
	struct stack *s1;
	create(s1);
	char *Menu = "Enter the key corresponding to different operation: \n 1 for pushing \n 2 for pop \n 3 for peek \n 4 for checking that is stack empty \n 5 to check size of the stack \n 6 to print menue again \n any other key to quit";
	printf("%s", Menu);
	int key=1;
	while(key>0 && key<=6){
		printf("Enter the key: ");
		scanf("%d", &key);
		switch(key){
			case 1: 
				printf("Pushing in stack Enter the value to push: ");
				char c;
				fflush(stdin);
				scanf("%c",&c);
				push(s1,c);
				printf("Value pushed in stack : %c \n",c);
				break;
			case 2:
				printf("Popping from stack \n");
				char poped=pop(s1);
				printf("Value poped from stack : %c \n",poped);
				break;
			case 3: 
				printf("Peeking in stack \n");
				char peeked=peek(s1);
				printf("Value top of stack : %c \n",peeked);
				break;
			case 4:
				if(isEmpty(s1)){
					printf("Stack is empty \n");
				}
				else{
					printf("Stack is not empty \n");
				}
				break;
			case 5: 
				printf("Size of the stack is %d \n",getSize(s1));
				break;
			case 6:
				printf("%s", Menu);
				break;
			default :
			printf("Good bye");
		}
	}
	return 0;
}
