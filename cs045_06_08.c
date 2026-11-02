#include <stdio.h>
int main(){
    typedef struct employe{
        int id ;
        char name[100];
        float basic;
        float allowances;
        float salary;
    }person;

    person e;
    printf("Id : ");
    scanf("%d",&e.id);
    printf("name :");
    scanf("%s",e.name);
    printf("Basic :");
    scanf("%f",&e.basic);
    printf("Allowance :");
    scanf("%f",&e.allowances);
    e.salary=e.basic+e.allowances;
    printf("Total Salary =%f",e.salary);

    return 0;
    
    
}