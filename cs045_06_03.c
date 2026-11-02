#include <stdio.h>
#include <string.h>

int main(){
    struct book{
        int book_id;
        char Title[100];
        float Price;
    };
    struct book b;
    printf("Book ID = ");
    scanf("%d",&b.book_id);
    printf("Title = ");
    scanf("%s",&b.Title);
    printf("Price = ");
    scanf("%f",&b.Price);



    printf("Book ID:%d ,",b.book_id);
    printf("Title :%s ,",b.Title);
    printf("Price : %f ,",b.Price);

    return 0;
}