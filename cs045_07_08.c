#include <stdio.h>
#include <string.h>
int main(){
    char str[200];
    gets(str);
    int count=0;
    int i=0;
    while(str[i]!='\0'){
        count++;
        i++;
    }
    printf("Length Of The String : %d",count);
    return 0;
}