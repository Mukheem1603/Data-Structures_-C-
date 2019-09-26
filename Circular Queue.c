#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int front=0;
int rear=0;
int n=5;
int cq[100];
void ins(int k)
{
	if((front==0&&rear==n-1)||(front==rear+1))
	{
		printf("The Queue is FULL!!\n");
	}
	else
	{
		if(rear==n-1)
		{
			cq[rear]=k;
			rear=0;
		}
		else
		{
		 cq[rear]=k;
		 rear++;	
		}
	}
}
void rem()
{
  if(front==rear)
  {
  	printf("The Queue is EMPTY!!\n");
  }	
  else
  {
  	printf("The Element removed is %d\n",cq[front]);
  	if(front==n-1)
  	{
  		front=0;
	}
	else
	{
		front++;
	}
  }
}
void print()
{
  if(front==rear)
  {
  	printf("No elements are available!!\n");
  }
  else
  {
  	int i;
  	printf("The elements are:\n");
  	if(front<rear)
  	{
  		for(i=front;i<rear;i++)
  		{
  			printf("%d\n",cq[i]);
		  }
	  }
	  else
	  {
	  	for(i=front;i<n;i++)
	  	{
	  		printf("%d\n",cq[i]);
		  }
		  for(i=0;i<rear;i++)
		  {
		  	printf("%d\n",cq[i]);
		  }
	  }
   }	
}
void main()
{
	int a,k;
	while(1)
	{
		printf("Select your option:\n");
		printf("1.Enqueue\n2.Dequeue\n3.Print elements\n4.Exit\n");
		scanf("%d",&a);
		switch(a)
		{
			case 1: printf("Enter the element to be inserted:\n");
			        scanf("%d",&k);
			        ins(k);
			        break;
			case 2: rem();
			        break;
			case 3: print();
			        break;
			case 4: exit(0);
			        break;
		}
	}
	getch();
}

