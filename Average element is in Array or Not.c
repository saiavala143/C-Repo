#include<stdio.h>
int main(){
    int n,f=0,s=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        s+=a[i];
    }
    int k=s/n;
    for(int i=0;i<n;i++){
        if(k==a[i]){
        f=1;
        break;
        }
    }
    if(f==1)
    printf("True");
    else
    printf("False");
}