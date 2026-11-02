#include <stdio.h>
struct student{
    int roll_no;
    char name[100];
};
void search(struct student arr[],int n,int key){
    for (int i=0;i<n;i++){
        if(key==arr[i].roll_no){
            printf("Student Found\n");
            printf("Name:%s",arr[i].name);
            break;
        }
    }
    
}
int main(){
    int n;
    printf("Enter number of student:");
    scanf("%d",&n);
    struct student  arr[n];
    for (int i=0;i<n;i++){
        printf("Roll No :");
        scanf("%d",&arr[i].roll_no);
        printf("Name :");
        scanf("%s",arr[i].name);
    }
    int key;
    printf("Key :");
    scanf("%d",&key);
    search(arr,n,key);

    return 0;

}