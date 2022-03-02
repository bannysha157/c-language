#include<stdio.h>
void swap(int ,int); //fun declaration
void main()
{
int x,y;
x=10;
y=20;
printf("Before swap x=%d y=%d",x,y);//x=10,y=20
swap(x,y);//fun call actual arguments
printf("after swap x=%d y=%d",x,y);
}
void swap(int a,int b)//fundef formal argumnt
{
int temp;
temp=a;
a=b;
b=a;
}

