#include<stdio.h>
int main(){
    int n,a[100],s=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        s+=a[i];
    }
    int c=0;
    int avr=s/n;
    for(int i=0;i<n;i++){
        if(a[i]<=avr){
            c+=1;
        }
    }
    printf("%d",c);
}