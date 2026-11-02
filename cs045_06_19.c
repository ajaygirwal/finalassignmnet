#include <stdio.h>
typedef struct student{
    int roll_no;
    char name[100];
    float math;
    float english;
    float physic;
    float chemistry;
    float computer_science;
    float total;
    float percentage;

}student;
void search(student arr[],int n,int search_roll_no){
    for (int i=0;i<n;i++){
        if(arr[i].roll_no==search_roll_no){
            printf("Roll Number :%d \n ",arr[i].roll_no);
            printf("Name :%s\n",arr[i].name);
            printf("Maths marks :%f\n",arr[i].math);
            printf("English marks :%f\n",arr[i].english);
            printf("Pysics marks :%f\n",arr[i].physic);
            printf("Chemistry marks :%f\n",arr[i].chemistry);
            printf("Computer Science marks :%f\n",arr[i].computer_science);
            printf("total:%.2f\n",arr[i].total);
            printf("Percentage : %.2%%f\n",arr[i].percentage);
            break;
            
        }
        else{
            printf("Invlaid Roll Number");
        }
    }
}

int main(){
    int n;
    printf("Number of Student :");
    scanf("%d",&n);
    student arr[n];
    for(int i=0;i<n;i++){
        printf("Roll Number :");
        scanf("%d",&arr[i].roll_no);
        printf("Name :");
        scanf("%s",arr[i].name);
        printf("Marks Maths :");
        scanf("%f",&arr[i].math);
        printf("Marks English :");
        scanf("%f",&arr[i].english);
        printf("Marks Physic :");
        scanf("%f",&arr[i].physic);
        printf("Marks Chemistry :");
        scanf("%f",&arr[i].chemistry);
        printf("Marks computer science :");
        scanf("%f",&arr[i].computer_science);
        arr[i].total=(arr[i].chemistry+arr[i].computer_science+arr[i].english+arr[i].math+arr[i].physic);
        arr[i].percentage=arr[i].total/5;
    }
    int search_roll_no;
    printf("Enter Roll Number :");
    scanf("%d",&search_roll_no);
    search(arr,n,search_roll_no);
    return 0;

}