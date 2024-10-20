#include<stdio.h>
int main(){
    int s,H,M,S,h;
    scanf("%d",&s);
    H=s/3600;
    h=s%3600;
    M=h/60;
    S=h%60;
    printf("H:M:S-%d:%d:%d",H,M,S);
}