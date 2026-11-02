#include <stdio.h>
#include <string.h>
int main(){
    struct product{
        int id;
        char name[200];
        int quantity;
    };
    struct product p;
    printf("ID = ");
    scanf("%d",&p.id);
    printf("Name = ");
    scanf("%s",&p.name);
    printf("Quantity =");
    scanf("%d",&p.quantity);

    printf("Id:%d ,",p.id);
    printf("Name:%s ,",p.name);
    printf("Quantity:%d ,",p.quantity);

    return 0;
}