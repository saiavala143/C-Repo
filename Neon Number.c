#include<stdio.h>
int main(){
    int n,s=0;
    scanf("%d",&n);
    int m=n*n;
    while(m>0){
        int r=m%10;
        s+=r;
        m=m/10;
    }
    if(s==n)
    printf("Neon Number");
    else
    printf("Not Neon Number");
}