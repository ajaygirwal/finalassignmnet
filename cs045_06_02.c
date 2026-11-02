#include <stdio.h>
#include <string.h>

int main(){
    struct employe{
        int id;
        char name[50];
        float salary;
    };
    struct employe e;
    printf("ID = ");
    scanf("%d",&e.id);
    printf("Name = ");
    scanf("%s",&e.name);
    printf("Salary = ");
    scanf("%f",&e.salary);

    printf("Id : %d ,",e.id);
    printf("Name : %s ,",e.name);
    printf("Salary : %f ",e.salary);

    return 0;
}
