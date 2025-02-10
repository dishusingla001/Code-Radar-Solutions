#include <stdio.h>

int bubbleSort(int arr , int n){
    int swap;
    for(int a=0;a<n;a++){
        formula = n-a;
        for(int b=0;b<formula;b++){
            if(arr[b]>arr[b+1]){
                swap=arr[b];
                arr[b]=arr[b+1];
                arr[b+1]=swap;
            }
        }
    }
    return arr;
}

void printArray(int arr,int n){
    for(int a=0;a<n;a++){
        printf("%d ",arr[a]);
    }
}

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    bubbleSort(arr,n);
    printArray(arr,n);
    return 0;
}