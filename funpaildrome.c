#include<stdio.h>
int palin(int num);
int main(){
    int num,sum=0;
    printf("enter num:");
    scanf("%d",&num);
   if(palin(num))
    printf("palindrome");
         else
         printf("not palindrome");
       }
int palin(int num){
    int sum=0,temp=num;
    while(temp>0){
     sum=sum*10+temp%10;
     temp=temp/10;
    }
    return num==sum;
     
}

