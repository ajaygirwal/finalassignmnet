#include <stdio.h>
#include <string.h>
int main(){
    struct student{
        int Roll_No;
        float Marks;
        char name[50];
    };
    struct student s;
    printf("Roll No = ");
    scanf("%d",&s.Roll_No);
    printf("Name = ");
    scanf("%s",&s.name);
    printf("Marks = ");
    scanf("%f",&s.Marks);

    printf("Roll no = %d ,",s.Roll_No);
    printf("Name = %s ,",s.name);
    printf("Marks = %f ,",s.Marks);





    return 0;
}
