#include <stdio.h>
#include <string.h>
int main(){
    struct date{
        int day;
        int month;
        int year;
    };
    struct date d;
    scanf("%d %d %d",&d.day,&d.month,&d.year);
    printf("%d/%d/%d ",d.day,d.month,d.year);
    return 0;

}