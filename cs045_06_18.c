#include <stdio.h>
typedef struct student
{
    int roll_no;
    char name[100];
    int class;
}student;

int main(){
    int n;
    printf("Number of student :");
    scanf("%d",&n);
    student arr[n];
    for (int i=0;i<n;i++){
        printf("Roll Number :");
        scanf("%d",&arr[i].roll_no);
        printf("Name :");
        scanf("%s",arr[i].name);
        printf("Class :");
        scanf("%d",&arr[i].class);
    }
    printf("Database Created");
    return 0;
}