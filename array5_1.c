#include <stdio.h>
#define SIZE 10
void rev(int arr[]);
int main()
{
    int arr[SIZE],i;
    printf("enter the array elements:");
    for(i=0;i<SIZE;i++){
        scanf("%d",&arr[i]);
    }
rev(arr);
}
void rev(int arr[]){
    int i;
    printf("reverse of array:\n");
    for(i=0;i<SIZE;i++){
    printf("%d",arr[9-i]);//reverse index
    
    }
}
