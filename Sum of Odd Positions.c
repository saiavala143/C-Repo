#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],s=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(i%2!=0)
        s+=a[i];
    }
    printf("%d",s);
}