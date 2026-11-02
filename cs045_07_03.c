#include <stdio.h>
int main(){
    int a,b;
    int sum=0;
    printf("a = ");
    scanf("%d",&a);
    printf("b = ");
    scanf("%d",&b);
    int *p=&a;
    int *q=&b;
    sum= *p +*q;
    printf("Sum = %d",sum);
    return 0;
}