#include <stdio.h>
int main(){
    int n;
    printf("N = ");
    scanf("%d",&n);
    int *p=&n;
    *p=*p+1;
    printf("N = %d",*p);
    return 0;
}