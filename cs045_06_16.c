#include <stdio.h>
typedef struct patient
{
    int patient_id;
    char patient_name[100];
    char patient_disease[200];
}patient;

void search(patient arr[],int n,int search_id){
    for (int i=0;i<n;i++){
        if(arr[i].patient_id==search_id){
            printf("Id : %d \n",arr[i].patient_id);
            printf("Name : %s \n",arr[i].patient_name);
            printf("Disease : %s \n",arr[i].patient_disease);
            printf("Record Stored");
            break;
        }
        else{
            printf("Invalid ID");
        }
        
    }


}

int main(){
    int n;
    printf("Enter Number patient : ");
    scanf("%d",&n);
    patient arr[n];
    for (int i=0;i<n;i++){
        printf("Patient ID :");
        scanf("%d",&arr[i].patient_id);
        printf("Patient Name :");
        scanf("%s",arr[i].patient_name);
        printf("Disease :");
        scanf("%s",arr[i].patient_disease);
    }
    int search_id;
    printf("Enter Patient id :");
    scanf("%d",&search_id);
    search(arr,n,search_id);
    return 0;
}
