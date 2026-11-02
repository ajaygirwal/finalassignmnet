#include <stdio.h>
#include <string.h>
struct student
{
    int roll_no;
    float marks;
};
void bubbleshort(struct student arr[],int n){
    struct student temp;
    for (int i=0;i<n-1;i++){
        for (int j=0;j<n-i-1;j++){
            if (arr[j].marks <arr[j+1].marks){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
        }
    }
    
}
int main(){
    struct student
    {
        int roll_no;
        float marks;
    };

    int n;
    scanf("%d",&n);
    struct student arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i].roll_no);
        scanf("%f",&arr[i].marks);
    }
    bubbleshort(arr,n);

    for (int i=0;i<n;i++){
        printf("Roll No = %d\n",arr[i].roll_no);
        printf("Marks = %f\n",arr[i].marks);
    }
    return 0;

    
}