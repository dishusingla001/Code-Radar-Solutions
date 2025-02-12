#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d ",&arr[i]);
    }

    int even=0;
    int odd=0;
    for(int j=0j;j<size;j++){
        if(arr[j]%2==0){
            even+=1;
        }
        else{
            odd+=1;
        }
    }
    printf("%d %d",even,odd);
    return 0;
}