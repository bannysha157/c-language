/*#include<stdio.h>
#include<string.h>
int main()
{
    int i;
   char arr[]="hello";
        int n=sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<n;i++)
    printf("%c\n",arr[i]);
    for(i=0;i<n;i++){
    printf("%p\n",&arr[i]);
    }
    printf("length of the string arr=%d\n",strlen(arr));
}*/
#include<stdio.h>
int len(char arr[]);
int main(){
    char arr[]="hello";
    int n=sizeof(arr)/sizeof(arr[0]);
    return len(arr);
}
int len(char arr[]){
    int i=0;
    while(arr[i]!='\0')
    i++;
    printf("%d",i);
}
