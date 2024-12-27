#include<stdio.h>
int main(){
    int arr[4];
    for(int i=0;i<4;i++){
        scanf("%d",&arr[i]);
        if(arr[i]<10){
            printf("NO");
            return 0;
        }
    }
    printf("YES");
}