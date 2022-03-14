#include<stdio.h>
#define size 5  //size declaration
int stack[s];
int top=-1;
void push(int ele)
{                  
	if(top==size-1)
	{
		printf("stack is full\n");
		return;
	}
	else
	{
	top++;    //top=0+   top=1   top=2  
	stack[top]=ele;// 1     2     3
	}
}
void pop()
{
	if(top==-1)
	{	
		printf("stack is empty\n");
		return;
	}
	else
	{
	printf("poped elements are: %d\n",stack[top]);//3  stack[2] stack[1]=2
	top--;
	}
}
void display()
{
	if(top== -1)
	{
		printf("stack is empty\n");
		return;
	}
	int i;
	for(i=0;i<=top;i++)//0->1;1->2;2->
	printf("%d\n",stack[i]);//stack[0]=1,2,3
}
int main()
{
	push(1);
	push(2);
	push(3);
	display();
	pop();
	display();
}
