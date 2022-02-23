i#include<stdio.h>
#define N 5
int main()
{
  const  int arr[N];
    int i,n,l,s;
   // printf("enter the size");
    //scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    i=0,s=0;
    for(i=0;i<N;i++){
        if(arr[i]>l){
        s=l;
        l=arr[i];
    }
    else if(arr[i]>s&&arr[i]<l)
{
        s=arr[i];
    }
}
printf("second largest=%d\n",s);
}




