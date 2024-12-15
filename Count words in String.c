#include<stdio.h>
#include<ctype.h>
int main(){
    char str[100];
    int wc=0,w=0;
    fgets(str,sizeof(str),stdin);
    for(int i=0;str[i]!='\0';i++){
        if(isspace(str[i])){
            w=0;
        }else{
            if(w==0){
                wc++;
                w=1;
            }
        }
    }
    printf("%d",wc);


}