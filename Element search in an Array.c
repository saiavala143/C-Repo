#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],s;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int f=0;
    scanf("%d",&s);
    for(int i=0;i<n;i++){
        if(a[i]==s)
        {
            f=1;
        }
    }
    if(f==1){
        printf("True");
    }
    else
    printf("False");
}