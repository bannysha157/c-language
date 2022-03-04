#include <stdio.h>
struct date
{
    int dd,mm,yy;
};
struct student 
{
    int rno;
    char name[20];
    float avg;
    struct date doj;
}s1;
int main(){
    printf("enter student rolno:");
    scanf("%d",&s1.rno);
    printf("enter student name:");
    scanf("%s",s1.name);
    printf("enter date of join(dd-mm-yy):");
    scanf("%d-%d-%d",&s1.doj.dd,&s1.doj.mm,&s1.doj.yy);
    printf("enter student average marks:");
    scanf("%f",&s1.avg);
    
    printf("\nstudent information is:");
    printf("\n student rollno:%d",s1.rno);
    printf("\n student name:%s",s1.name);
    printf("\nstudent date of join:%d-%d-%d",s1.doj.dd,s1.doj.mm,s1.doj.yy);
    printf("student average marks:%f",s1.avg);
}

