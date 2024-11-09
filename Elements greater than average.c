#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],c=0,s=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        s+=a[i];
    }
    int k=s/n;
    for(int i=0;i<n;i++){
        if(a[i]>=k)
        c=c+1;
    }
    printf("%d",c);
}