#include <stdio.h>
int main(){
    char source[200];
    char target[200];
    char *s=source;
    char *t=target;
    printf("Enter The source String : ");
    fgets(source,sizeof(source),stdin);
    while((*s++=*t++));
    printf("Original string: %s\n",source);
    printf("Copied string: %s\n",target);
    return 0;

}