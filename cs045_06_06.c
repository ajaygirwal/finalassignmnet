#include <stdio.h>
#include <string.h>
int main(){
    typedef struct student{
        char name[100];
        int roll_no;
        float marks;
    }data;
    int n;
    printf("Number of stdent :");
    scanf("%d",&n);
    
    data arr[n];
    for (int i=0;i<n;i++){
        scanf("%s",arr[i].name);
        scanf("%d",&arr[i].roll_no);
        scanf("%f",&arr[i].marks);
    }
    for (int i=0;i<n;i++){
        printf("Name = %s \n",arr[i].name);
        printf("Roll no = %d \n",arr[i].roll_no);
        printf("Marks = %f \n",arr[i].marks);
    }
    return 0;

}