#include<stdio.h>
#include<math.h>
int main(){
    int x,y,m;
    scanf("%d%d%d",&x,&y,&m);
    int r=pow(x,y);
    printf("%d",r%m);
}