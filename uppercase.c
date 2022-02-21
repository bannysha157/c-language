#include<stdio.h>
void myupr(char str[]);
int main()
{
	char str[30];
	printf("enter the characters:");
	scanf("%[^\n]s",str);
	myupr(str);
	printf("%s\n",str);
}

void myupr(char str[])
{
	int i=0;
	while(str[i]!='\0')
	{
	if(str[i] >='a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	i = i+2;
	}
}
