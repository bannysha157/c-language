#include<stdio.h>
#include<string.h>
void main()
{
char string1[100];
char string2[100];
printf("enter any string:");
gets(string1);
printf("enter any string:");
   gets(string2);
strcat(string1,string2);//simply string1= string1-string2
printf("the new string is :%s\n",string1);
int len=strlen(string1);// the concatenated string will bestored in string1 so lenth of strin1
printf("the length of the concatenated string is: %d",len);
}

