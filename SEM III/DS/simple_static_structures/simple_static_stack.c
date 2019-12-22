// Simple Static Stack
// @ Shreyas kapale

#include<stdio.h>
#include<stdlib.h> // exit() depends  
#define SIZE 5
// Global Declaration
int stack[SIZE],top=-1,tmp,opt;
main()
{	
	printf("\n				- 	 STATIC STACK  -                       ");
	while(1)
	{	
		printf("\n 1. Push \n2. Pop \n3. Peek()\n 4.Exit");
		printf("Choose Option >  ");
		scanf("%d",&opt);
		switch(opt)
		{
			case 1: push();
			break;
			case 2: pop();
			break;
			case 3: peek();
			break;
			case 4: exit(0);break;
			default: printf("\n Please choose the correct option from the above menu");break;
		}
			
	}
}
// Stack Operation Functions 
	
	push()
	{	
		if(top == 4)
			printf("\n                                              Status : Stack is Full");
		else{
			printf("\nEnter the item : ");
			scanf("%d",&tmp);
			stack[++top] = tmp ;
			printf("\n                                              Log : Pushed item : %d",tmp);
			
			}
	}
	pop()
	{
		if(top == -1)
			printf("\n                                              Status : Stack is Empty");
		else{
			printf("\n                                              Log : Popped item : %d",stack[top]);
			top--;
			}
	}
	peek()
	{
		if(top == -1)
			printf("\n                                              Status : Stack is Empty");
		else{
			printf("\n                                              Status : Top item : %d", stack[top]);
		}
	}
	
