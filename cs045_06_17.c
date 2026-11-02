#include <stdio.h>
typedef struct train{
    int ticket_id;
    char name[100];
    int age;
    int seat_no;
}train;

int main(){
    int n;
    printf("Number of passagers:");
    scanf("%d",&n);
    train arr[n];
    for (int i=0;i<n;i++){
        printf("Seat Booked");
        printf("Ticket_id : ");
        scanf("%d",&arr[i].ticket_id);
        printf("Name : ");
        scanf("%s",arr[i].name);
        printf("Age :");
        scanf("%d",&arr[i].age);
        printf("Seat Number :");
        scanf("%d",&arr[i].seat_no);
        printf("Booking Confirmed ");
    }
    return 0;
}