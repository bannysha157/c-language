#include <stdio.h>
#define SIZE 5  //macro
int sec_lar(int arr[],int n);
int main(){
    int arr[SIZE],n,i;
    printf("enter the elements");
    for(i=0;i<SIZE;i++){
        scanf("%d",&arr[i]);
    }
    //printf("%d",sec_lar(arr,n));
 return sec_lar(arr,n); //funcall
   
}
int sec_lar(int arr[],int n){
    int i,l=0,s=0;
    for(i=0;i<SIZE;i++){
        if(arr[i]>l){
            s=l;
            l=arr[i];
        }
        else if(arr[i]>s){
            s=arr[i];
        }
    }
    printf("%d",s);
}
