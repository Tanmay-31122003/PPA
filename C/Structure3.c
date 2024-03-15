#include<stdio.h>

struct Student
{
    int RollNo;     //4
    char Div;       //1
    int Age;        //4
    char B;
    float Marks;    //4
    int Salary;     //4
};

int main()
{
    struct Student Amit;
    struct Student Pooja;

    printf("Size of object is : %d\n",sizeof(Amit));
    
    Amit.RollNo = 11;
    Amit.Div = 'A';
    Amit.Marks = 90.89;
    Amit.Age = 19;
    Amit.Salary = 21000;

    Pooja.RollNo = 21;
    Pooja.Div = 'D';
    Pooja.Marks = 93.67;
    Pooja.Age = 17;
    Pooja.Salary = 5000;

    printf("Age of Amit is : %d\n", Amit.Age);
    printf("Age of Pooja is : %d\n", Pooja.Age);

    printf("Salary of Amit is : %d\n", Amit.Salary);
    printf("Salary of Pooja is : %d\n", Pooja.Salary);

    return 0;
}