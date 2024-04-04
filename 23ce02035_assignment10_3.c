#include<stdio.h>
#include<string.h>
struct Employee
{
    int id;
    char name[50];
    union EmpDetails
    {
        float hourly_wage;
        double fixed_salary;
    }details;

};
int main()
{
    struct Employee emp;
    union EmpDetails details;
    emp.id=1010;
    strcpy(emp.name,"Ram");
    
    printf("\nEmployee ID:%d",emp.id);
    printf("\nEmployee name: %s",emp.name);
    emp.details.hourly_wage=20.40;
    printf("\nHourly wage:%f",emp.details.hourly_wage);
    emp.details.fixed_salary=10000;
    printf("\nFixed Salary:%lf",emp.details.fixed_salary);
    return 0;

}