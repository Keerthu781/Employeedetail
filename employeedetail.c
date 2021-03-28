#include <stdio.h>
typedef struct{
 
    char name[20];
    int AGE,PHONENUMBER;
    int salary;
 
} Employee;
 
int main()
{
    int i, n=20;
 
    Employee employees[n];
    printf("Enter %d Employee Details \n \n",n);
    for(i=0; i<n; i++)
          {
        printf("Employee %d:- \n",i+1);
        printf("Name: ");
        scanf("%s",employees[i].name);
        printf("AGE: ");
        scanf("%d",&employees[i].AGE);
        printf("PHONENUMBER: ");
        scanf("%d",&employees[i].PHONENUMBER);
        printf("Salary: ");
        scanf("%d",&employees[i].salary);
 
        printf("\n");
    }
    printf("All Employees Details \n");
    printf("_________________________]n");
 
    for(i=0; i<n; i++){
 
        printf("Name \t: ");
        printf("%s \n",employees[i].name);
 
        printf("AGE \t: ");
        printf("%d \n",employees[i].AGE);
        
        
        printf("PHONENUMBER\t: ");
        printf("%d \n",employees[i].PHONENUMBER);
        printf("Salary \t: ");
        printf("%d \n",employees[i].salary);
 
        printf("\n");
    }
 
    return 0;
 
}



