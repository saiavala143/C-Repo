#include<stdio.h>
#include<ctype.h>
int main(){
    char str[100];
    char max;
    fgets(str,sizeof(str),stdin);
    max=str[0];
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>max){
            max=str[i];
        }
    }
    printf("%c",max);
}