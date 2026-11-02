#include <stdio.h>
#include <string.h>
typedef struct employe{
    int id;
    char name[100];
    float gross; 
    float deduction;
    float tsalary;
}employe;
void payroll(employe arr[],int n,int Id_empolye){
    for (int i=0;i<n;i++){
        if (arr[i].id==Id_empolye){
            printf("Name : %s\n",arr[i].name);
            printf("Gross : %f \n",arr[i].gross);
            printf("Deduction:%f\n",arr[i].deduction);
            printf("Net salary :%f\n",arr[i].tsalary);
            break;
        }
    }
}
int main(){
    int n;
    printf("Number of employe :");
    scanf("%d",&n);
    employe arr[n];
    for (int i=0;i<n;i++){
        printf("Id:");
        scanf("%d",&arr[i].id);
        printf("Name:");
        scanf("%s",arr[i].name);
        printf("Gross :");
        scanf("%f",&arr[i].gross);
        printf("Deduction:");
        scanf("%f",&arr[i].deduction);
        arr[i].tsalary=arr[i].gross-arr[i].deduction;
    }
    int Id_employe;
    printf("Enter Id of employe :");
    scanf("%d",&Id_employe);
    payroll(arr,n,Id_employe);
    return 0;
}