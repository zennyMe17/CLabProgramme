#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct EMPLOYEE{
    
    char EMP_NAME[50];
    int Id;
    char DEPT_NAME[50];
    float Salary;
    
};

float TOT_Salary(struct EMPLOYEE *employee, int n, const char *dept_name);


int main() {
    
    int n;
    printf("Enter the number of Employees = ");
    scanf("%d",&n);
    
    struct EMPLOYEE *employee = (struct EMPLOYEE *)malloc(n*sizeof(struct EMPLOYEE));
    
    for (int i=0;i<n;i++)
    {
        
        printf("Enter the details of %d Employee: \n",i+1);
        printf("Enter the Name of the Employee : \n");
        scanf(" %[^\n]",employee[i].EMP_NAME);
        printf("Enter the I'D of the Employee : \n");
        scanf("%d",&employee[i].Id);
        printf("Enter the Department Name of the Employee : \n");
        scanf(" %[^\n]",employee[i].DEPT_NAME);
        printf("Enter the Salary of the Employee : \n");
        scanf("%f",&employee[i].Salary);
        
    }
    for (int i=0;i<n;i++)
    {
        
        printf("The details of Employee %d: \n",i+1);
        printf(" Name of the Employee : %s \n",employee[i].EMP_NAME);
        printf("I'D of the Employee : %d \n",employee[i].Id);
        printf("The Department Name of the Employee : %s \n",employee[i].DEPT_NAME);
        printf("The Salary of the Employee : %.2f \n",employee[i].Salary);
        
    }
    
    char dept_name[50];
    printf("Enter The Department Name to find total salary = ");
    scanf(" %[^\n]",dept_name);
    float Total_Salary=TOT_Salary(employee, n, dept_name);
    printf("Total salary is = %.2f",Total_Salary);
    return 0;
}

float TOT_Salary(struct EMPLOYEE *employee, int n, const char *dept_name)
{
    int total_salary=0;
    for (int i=0;i<n;i++)
    {
        if (strcmp(employee[i].DEPT_NAME,dept_name)==0)
        {
            total_salary=total_salary+employee[i].Salary;
        }
    }
    return total_salary;
}