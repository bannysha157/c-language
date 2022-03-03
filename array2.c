#include <stdio.h>
#define n 10   //macro
int main()
{
    char ch[n]={'a','A','c','d','e','f','g','h','i','j'};
    int index=0,i=0;
    for(i=0;i<n;i++)
    {
        index++; //index=1,2,3,4,5
        switch(ch[i]) //switch(0)=a switch(A) switch(c)
        {
        case 'a':
            printf("a is found at %d\n",index);
            printf("Address is:%p ",&ch[i]);
            break;
        case 'A':
            printf("\nA is found at %d\n",index);
            printf("Address is:%p ",&ch[i]);
            break;
        case 'e':
            printf("\ne is found at %d\n",index);
            printf("Address is:%p ",&ch[i]);
            break;
        case 'E':
            printf("\nE is found at %d\n",index);
            printf("Address is:%p ",&ch[i]);
            break;
        case 'i':
            printf("\ni is found at %d\n",index);
            printf("Address is:%p ",&ch[i]);
            break;
        case 'I':
            printf("\nI is found at %d\n",index);
            printf("Address is:%p ",&ch[i]);
            break;
        case 'o':
            printf("\no is found at %d\n",index);
            printf("Address is:%p ",&ch[i]);
            break;
        case 'O':
            printf("\nO is found at %d\n",index);
            printf("Address is:%p ",&ch[i]);
            break;
        case 'u':
            printf("\nu is found at %d\n",index);
            printf("Address is:%p ",&ch[i]);
            break;
        case 'U':
            printf("\nU is found at %d\n",index);
            printf("Address is:%p ",&ch[i]);
            break;
        }
    }
    return 0;
}
