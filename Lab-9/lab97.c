// WAP to define a C structure named Student (roll_no, name, branch and batch_no) and also to access the structure members using Pointer.
#include<stdio.h>
struct student{
    int roll_no;
    char name[100];
    char branch[50];
    int batch_no;
};
void main(){
    struct student s1 = {101,"dhruvi","CSE",10};
    struct student *ptr;
    ptr = &s1;
    printf("Student Roll number:%d\n",ptr->roll_no);
    printf("Student Nsme:%s\n",ptr->name);
    printf("Student Branch:%s\n",ptr->branch);
    printf("Student Batch Number:%d\n",ptr->batch_no);
}