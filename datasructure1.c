#include<stdio.h>
#include<stdlib.h>
struct adi
{
int info;
struct adi*link;
};
struct adi*top=NULL;
struct adi*push();
void pop();
void display();
int main()
{
int choice,c=1;
while(c)
{
printf("\n\n*****menu*****\n");
printf("1.push\n 2.pop\n 3.display\n 4.exit");
printf("\n enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:top=push();
break;
case 2:pop();
break;
case 3:display();
break;
case 4:c=0;
break;
default:printf("\nwrong selection!!!try again!!!");
}
}
}
struct adi*push()
{
struct adi*temp;
temp=(struct adi*)malloc(sizeof(struct adi));
if(temp==NULL)
{
printf("stack overflow:element can't be inserted\n");
return top;
}
else
{
printf("enter the element to be inserted:\n");
scanf("%d",&temp->info);
temp->link=top;
top=temp;
return top;
}
}
void pop()
{
struct adi*temp;
if(top==NULL)
{
printf("list is empty....\n");
}
else
{
temp=top;
printf("%d is the element deleted\n",temp->info);
top=top->link;
temp->link=NULL;
free(temp);
}
}
void display()
{
struct adi*temp;
if(top==NULL)
{
printf("stack is empty\n");
}
else
{
temp=top;
while(temp!=NULL)
{
printf("%d\t",temp->info);
temp=temp->link;
}
}
}
 

