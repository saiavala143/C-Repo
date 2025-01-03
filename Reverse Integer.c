#include<stdio.h>
int main(){
    int n,rev=0,f=0;
    scanf("%d",&n);
    if(n<0){
        f=1;
        n=-n;
    }
    while(n>0){
        int r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(f==1){
        printf("%d",-rev);
    }
    else
    printf("%d",rev);
}