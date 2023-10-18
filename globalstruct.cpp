#include<stdio.h>
 
 //global structure
struct Employee{
    char name[ 30 ];
    int empid;
    float salary;
};

int main(void )
{
    struct Employee emp;
        //struct Employee: Data type       emp.name
        //emp: object
    printf("global structure\n");
    printf("Name : ");
    scanf("%s",emp.name);
    printf("Empid : ");
    scanf("%d",&emp.empid);
    printf("Salary : ");
    scanf("%f", &emp.salary);


    printf("Name : %s\n", emp.name);
    printf("Empid : %d\n", emp.empid);
    printf("Salary : %f\n", emp.salary);
    //printf("%-30s%-5d%-10.2f\n", name, empid, salary);
   
    return 0;
}
