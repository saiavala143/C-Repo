#include<stdio.h>
int main(){
    int n,m,s=0,S=0;
    scanf("%d%d",&n,&m);
    for(int i=1;i<n;i++){
        if(n%i==0){
            s+=i;
        }
    }
    for(int j=1;j<m;j++){
        if(m%j==0){
            S+=j;
        }
    }
    if(n==S && m==s){
        printf("Amicable");
    }else{
        printf("Not Amicable");
    }
}