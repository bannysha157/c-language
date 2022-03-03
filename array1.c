#include <stdio.h>

int main()
{
    int i=0,n=5;
  //char arr[]={'a','b','c','d','e'};//type 1
 // char arr[5]={'a','b','c','d','e'};//type 2
  char arr[5];//type 3
  arr[0]='a';
  arr[1]='b';
  arr[2]='c';
  arr[3]='d';
  arr[4]='e';
  //char arr[5]={0};
  printf("%p",&arr[0]);
   printf("%d\n",arr[0]);
  printf("%d\n",arr[1]);
    printf("%d\n",arr[2]);
  printf("%d\n",arr[3]);
   printf("%d\n",arr[4]);
   while(i<n){
       printf("%d",arr[i]);
       i++;
   }
}
