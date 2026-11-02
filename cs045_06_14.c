#include <stdio.h>
#include <string.h>
typedef struct library{
    int id_book;
    char name[100];
    char status[100];
}library;
void search(library arr[],int n,char user[]){
    int found=0;
    int i;
    for (i=0;i<n;i++){
        if(strcmp(arr[i].name,user)==0){
            found=1;
            printf("Name of book  : %s\n",arr[i].name);
            printf("Status:%s\n",arr[i].status);
            break;
        }
    }
    if(found==1){
        printf("Statued Updated\n");
        strcpy(arr[i].status,"Already is issued or Not available");
    }
}
int main(){
    int n;
    printf("Number of book in libray:");
    scanf("%d",&n);
    library arr[n];
    for(int i=0;i<n;i++){
        printf("Id book:");
        scanf("%d",&arr[i].id_book);
        printf("Name of Book:");
        scanf("%s",arr[i].name);
        printf("Status:");
        scanf("%s",arr[i].status);
        }
    char user[100];
    printf("Name of Book user wanted to issue : ");
    scanf("%s",user);
    search(arr,n,user);
    return 0;
}