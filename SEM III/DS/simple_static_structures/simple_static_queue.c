// simple Static Queue
// @ Shreyas Kapale

#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
// Global Declaration
int queue[SIZE],front =-1,rear = -1,tmp,opt;
main()
{	
	printf("\n				- 	 STATIC QUEUE  -                       ");
	while(1)
	{	
		printf("\n 1. Enqueue ");
		printf("\n 2. Dequeue ");
		printf("\n 3. Display ");
		printf("\n 4. Exit ");
		printf("Choose Option >  ");
		scanf("%d",&opt);
		switch(opt)
		{
			case 1: enQueue();
			break;
			case 2: deQueue();
			break;
			case 3: display();
			break;
			case 4: exit(0);break;
			default: printf("\n Please choose the correct option from the above menu");break;
		}
			
	}
	
}

enQueue()
{
	if(rear == SIZE -1)printf("\n                                              Status : Queue is Full");
	else{
		if(front==-1)front=0;
		scanf("%d",&tmp);
		queue[++rear] = tmp;
		printf("\n                                              Log : inserted item : %d",tmp);	
	}
	
}
deQueue()
{
	if(front == -1)printf("\n                                              Status : Queue is Empty");
	else{
	printf("\n                                              Log : deleted item : %d",queue[front]);
	 front++;
	 }
	if(front > rear){
		front = rear = -1;
	}
}
display()
{
	if(front == -1)printf("\n                                              Status : Queue is Empty");
	else{
		int i;
		printf("\n                                              Status : Elements in the Queue ");
		for(i=front;i<=rear;i++){
			printf("\n                                          	   : %d",queue[i]);
		}
	}
}


