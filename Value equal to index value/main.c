#include<stdio.h>
int main(){
    int n;
    printf("n=");
    scanf("%d",&n);
    int arr[n];
    printf("array values");
    for (int i=0;i<n;i++){
        printf("arr[%d]=",i);
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n;i++){
        if(i==arr[i]){
            printf("%d=%d ",i,arr[i]);
        }
    }
}
