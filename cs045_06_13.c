#include <stdio.h>
typedef struct student{
    int roll_no;
    char name[100];
}student;
typedef struct address{
    student map;
    char address_name[50];
    char state[50];
    int pincode;

}adress;
int main(){
    int n;
    printf("Number of Student:");
    scanf("%d",&n);
    adress arr[n];
    for (int i=0;i<n;i++){
        printf("Roll Number:");
        scanf("%d",&arr[i].map.roll_no);
        printf("Name :");
        scanf("%s",arr[i].map.name);
        printf("Address:");
        scanf("%s %s %d",arr[i].address_name,arr[i].state,&arr[i].pincode);
    }

    for(int i=0;i<n;i++){
        printf("Roll Number:%d \n",arr[i].map.roll_no);
        printf("Name : %s \n",arr[i].map.name);
        printf("Address: %s ,%s , %d ",arr[i].address_name,arr[i].state,arr[i].pincode);
    }
    return 0;
}