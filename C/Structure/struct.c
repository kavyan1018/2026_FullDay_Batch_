#include<stdio.h>
#include<conio.h>

// structure 
struct Student{
    int Roll_no;
    char Name[50];
    float Marks;
};

void main(){

    struct Student s1;
    
    printf("\n Enter the Roll Numbre :");
    scanf("%d", &s1.Roll_no);
    
    printf("\n Enter Your Name :");
    scanf("%s", s1.Name);
    
    printf("\n Enter Your marks :");
    scanf("%f", &s1.Marks);
    
    printf("\n Your Roll Numbre is :%d", s1.Roll_no);
    printf("\n Your Your Name is :%s", s1.Name);
    printf("\n Your Your marks is :%.2f", s1.Marks);

}