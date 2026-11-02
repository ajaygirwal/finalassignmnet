#include <stdio.h>
int main(){
    typedef struct inventry
    {
        int item_id;
        char item_name[100];
        int stock;
    }item;
    item p;
    printf("Item Id = ");
    scanf("%d",&p.item_id);
    printf("Item Name = ");
    scanf("%s",p.item_name);
    printf("Stock :");
    scanf("%d",&p.stock);

    printf("Item Id = %d ,",p.item_id);
    printf("Item Name = %s ,",p.item_name);
    printf("Stock = %d ",p.stock);

    return 0;
}