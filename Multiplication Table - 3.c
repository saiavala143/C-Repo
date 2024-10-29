#include<stdio.h>
int main(){
    int n,a,m;
    scanf("%d%d%d",&n,&a,&m);
    for(int i=a;i<=m;i++){
        printf("%d x %d = %d\n",n,i,n*i);
        
    }
}