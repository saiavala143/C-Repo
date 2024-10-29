#include<stdio.h>
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=n+1;i<m;i++){
        printf("%d %d %d\n",i,i*i,i*i*i);
    }
}