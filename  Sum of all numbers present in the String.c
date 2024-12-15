#include<stdio.h>
#include<ctype.h>
int main(){
    char str[100],s=0;
    fgets(str,sizeof(str),stdin);
    for(int i=0;str[i]!='\0';i++){
        if(isdigit(str[i]))
        s+=str[i]-'0';
    }
    printf("%d",s);
}