#include <stdio.h>
#include <string.h>
int main(){
    typedef struct complexnumber
    {
        int a;
        int b;
    }complex;

    complex c;
    printf("Real Part :");
    scanf("%d",&c.a);
    printf("Imaginary Part :");
    scanf("%d",&c.b);

    if (c.b>0){
        printf("%d + %di\n",c.a,c.b);
    }else{
        printf("%d - %di\n",c.a,c.b);
        
    }

    return 0;

}