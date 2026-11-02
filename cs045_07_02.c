#include <stdio.h>
void swab(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main(){
    int a,b;
    printf("a = ");
    scanf("%d",&a);
    printf("b = ");
    scanf("%d",&b);

    swab(&a,&b); 
    printf("After Swap : a = %d ,b =%d ",a,b);
    return 0;

}