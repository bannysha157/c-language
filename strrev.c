#include<stdio.h>
void  mystrrev(char s[10]);
int main()
{

 char s[10];
 printf("enter the string name:");
 scanf("%s",s);
 mystrrev(s);
}
void  mystrrev(char s[10])
{
        int n;
        char ch;
        for(n=0;s[n]!='\0';n++);
        n=n-1;
        int i=0;
        while(n>i)
        {
         ch= s[i];
         s[i]=s[n];
         s[n]=ch;
         n--;
         i++;
      }
        printf("%s",s);
}

