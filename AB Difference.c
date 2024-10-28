#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int A=a+b;
    int B=a*b;
    if(A>B)
    printf("%d",A-B);
    if(B>A)
    printf("%d",B-A);

    


}