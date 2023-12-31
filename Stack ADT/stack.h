struct stack;
// create stack
void create( stack *s );
// push a char into stack
void push( stack *s, char x );
// pop the top of the stack
char pop( stack *s );
// return the top of stack, without popping
char peek( stack *s );
// is the stack empty?
int isEmpty( stack *s );
// return the size of the stack
int getSize( stack *s );