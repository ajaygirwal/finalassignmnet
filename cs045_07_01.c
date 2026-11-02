#include <stdio.h>
int main(){
    int x;
    printf("Enter Number Here:");
    scanf("%d",&x);
    int *p=&x;
    printf("Value = %d\n",x);
    printf("Value = %d",*p);
    return 0;
}