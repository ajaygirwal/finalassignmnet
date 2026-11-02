#include <stdio.h>
typedef struct student
{
    int roll;
    char name[100];
    char course[200];
    char faculty[100];
}student;
void search(student arr[],int n,int search_roll){
    for (int i=0;i<n;i++){
        if(arr[i].roll==search_roll){
            printf("Roll Number:%d\n",arr[i].roll);
            printf("Name :%s\n",arr[i].name);
            printf("course :%s\n",arr[i].course);
            printf("Faculty :%s",arr[i].faculty);
            break;
        }
        else{
            printf("Invliad Roll Number ");
        }
    }
}
int main(){
    int n;
    printf("Enter Number of  Student :");
    scanf("%d",&n);
    student arr[n];
    for (int i=0;i<n;i++){
        printf("Roll Number :");
        scanf("%d",&arr[i].roll);
        printf("Name of student :");
        scanf("%s",arr[i].name);
        printf("Name of Course : ");
        scanf("%s",arr[i].course);
        printf("Name of Faculty:");
        scanf("%s",arr[i].faculty);
    }
    int search_roll;
    printf("Enter Roll Number of Student You want :");
    scanf("%d",&search_roll);
    search(arr,n,search_roll);
    return 0;

} 