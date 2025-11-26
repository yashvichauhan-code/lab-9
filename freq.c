#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("enter number of elements you want to input:");
    scanf("%d", &n);
    int *arr;
    arr=(int *)malloc(n*sizeof(int));
    printf("enter %d elements: ",n);
    for (int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++){
        int appeared=0;
        for(int k=0; k<i; k++){
            if(arr[k]==arr[i]){
                appeared=1;
            }
        }
        if(appeared==1){
            continue;
        }
        int count=1;
        for(int j=i+1; j<n; j++){
            if(arr[j]==arr[i]){
                count++;
            }
        }
        printf("element %d appears %d times.\n", arr[i], count);
    }
    return 0;
}