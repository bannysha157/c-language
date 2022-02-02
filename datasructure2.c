#include<stdio.h>
#define SIZE 10
void enqueue();
void dequeue();
void display();
int queue[SIZE],front=0,rear=0;
void main()
{
int value,choice,c=1;
while(c)
{
printf("\n\n*****menu*****\n");
printf("1.insertion\n 2.deletion\n 3.display\n 4.exit");
printf("\n enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:enqueue();
break;
case 2:dequeue();
break;
case 3:display();
break;
case 4:c=0;
break;
default:printf("\nwrong selection!!!try again!!!");
}
}
void enQueue()
{
if(SIZE==rear)
printf("\nQueue is Full!!!insertion is not possible!!!");
else
{
int element;
printf("enter the element to be inserted\n");
scanf("%d",&element);
queue[rear]=element;
rear++;
printf("\ninsertion success!!!");
}
}
void deQueue()
{
if(front==rear)
printf("\nQueue is empty!!!deletion is not possible!!!");
else
printf("\ndeleted:%d",queue[front]);
int i;
for(i=0;i<rear-1;i++)
printf("%d\t",queue[i]);
}
} 

