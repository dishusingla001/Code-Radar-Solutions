#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);

    int arr[100];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int next=1;
    int previous=0;
    int max=0;
    for(int j=0;j<size;j++){
        if(arr[j]>next && arr[j]>previous){
            max=arr[j];
            break;
        }
        next++;
        previous++;
    }
    printf("%d",max);

    return 0;
}