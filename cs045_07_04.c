#include <stdio.h>
int main(){
    int n;
    printf("Number of Element :");
    scanf("%d",&n);
    int arr[n];
    for (int i=1;i<=n;i++){
        scanf("%d",arr + i);
    }

    for(int i=1;i<=n;i++){
        printf("Element %d = %d\n",i,*(arr+i));
    }
    return 0;
}