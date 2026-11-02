#include <stdio.h>
int  main(){
    typedef struct highest{
        char name[50];
        float marks;
        int roll_no;
    }high;
    
    int n;
    printf("Number of Student :");
    scanf("%d",&n);
    high arr[n];
    for (int i=0;i<n;i++){
        scanf("%s",arr[i].name);
        scanf("%f",&arr[i].marks);
        scanf("%d",&arr[i].roll_no);
    }
    int maxindex=0;
    int i;
    for (i=0;i<n;i++){
        if(arr[maxindex].marks<arr[i].marks){
            maxindex=i;
        }
    }
    printf("highest Number = %f \n",arr[maxindex].marks);
    printf("Name of student : %s \n " ,arr[maxindex].name);
    printf("Roll Number : %d \n",arr[maxindex].roll_no);

    return 0;
}