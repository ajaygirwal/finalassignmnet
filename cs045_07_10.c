#include <stdio.h>
int main(){
    char str1[200];
    char str2[200];
    printf("Enter String 1 : ");
    fgets(str1,sizeof(str1),stdin);
    str1[strcspn(str1,"\n")]='\0';
    printf("Enter String 2 : ");
    fgets(str2,sizeof(str2),stdin);
    str2[strcspn(str2,"\n")]='\0';
    char *s1=str1;
    char *s2=str2;
    int equal=1;
    while(*s1 !='\0'||*s2 !='\0'){
        if(*s1 != *s2){
            equal=0;
            break;
        }
        s1++;
        s2++;
    }
    if(equal==1){
        printf("Strings Are Equal\n");
    }else{
        printf("Strings Are Not Equal\n");
    }
    return 0;

}