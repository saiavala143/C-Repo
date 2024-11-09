#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int k,c=0;
    scanf("%d",&k);
    for(int i=0;i<n;i++){
        if(k==a[i])
        c+=1;
    }
    printf("%d",c);
}