#include<stdio.h>
#include<string.h>
int main(){
    char str[100],rev[100];
    int len,i;
    fgets(str,sizeof(str),stdin);
    len=strlen(str);
    for(i=0;i<len;i++){
        rev[i]=str[len-i-1];
    }
  printf("%s",rev);
}