#include<stdio.h>
#include<string.h>
//Enumeration for pay type
enum PayType
{
    HOURLY,
    SALARY
};
//Union containing employee details based on paytype
union EmpDetails
{
    struct 
    {
        float hourly_wage;

    }hourly_details;
    struct 
    {
        double fixed_salary;
    }salary_details;
};

//Structure representing an employee
struct Employee
{
    int emp_id;
    char name[100];
    enum PayType pay_type;
    union EmpDetails emp_details;
};

//Function to print employee details
void printEmployee(struct Employee emp)
{
    printf("\nEmployee ID: %d",emp.emp_id);
    printf("\nName: %s",emp.name);
    printf("\nPay type : %s",emp.pay_type == HOURLY?"Hourly":"Salary");
    
    //Accessing and printing employee details based on pay type
    if(emp.pay_type==HOURLY)
    {
        printf("\nHourly Wage:%.2f",emp.emp_details.hourly_details.hourly_wage);
    }
    else 
    {
        printf("\nFixed Salarye:%.2f",emp.emp_details.salary_details.fixed_salary);
    }
    printf("\n");
}

    int main()
    {
        //Declare an employee
        struct Employee emp;
        
        //For hourly employee
        emp.emp_id=101;
        emp.pay_type=HOURLY;
        strcpy(emp.name,"Aman");
        emp.emp_details.hourly_details.hourly_wage=15.75;

        printf("\nEmployee details:");
        printEmployee(emp);

        //For an salaried employee
        emp.emp_id=101;
        emp.pay_type=SALARY;
        strcpy(emp.name,"Mohan");
        emp.emp_details.salary_details.fixed_salary=15000;

        printf("\nEmployee details:");
        printEmployee(emp);

        return 0;
    }

