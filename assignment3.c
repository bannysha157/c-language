#include<stdio.h>
int main()
{
int a,b,add;
float c,d,sub;
long  e,f,mul;
double g,h,div;
unsigned int i,j,mod;
printf("enter the numbers\n");
scanf("%d%d",&a,&b);
scanf("%f%f",&c,&d);
scanf("%ld%ld",&e,&f);
scanf("%lf%lf",&g,&h);
scanf("%u%u",&i,&j);
add=a+b;
sub=c-d;
mul=e*f;
div=g/h;
mod=i%j;
printf("addition:%d\n",add);
printf("subtraction:%f\n",sub);
printf("multiplication:%ld\n",mul);
printf("division:%lf\n",div);
printf("modulus:%u\n",mod);
return 0;
}

