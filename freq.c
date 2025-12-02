#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    printf("enter number of integers you want to input: ");
    scanf("%d", &n);
    int *arr;
    arr=(int *)malloc(n*sizeof(int));
    printf("enter %d elements: \n",n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++){
        int appeared=0;
        for(int j=0; j<i;j++){
            if(arr[j]==arr[i]){
                appeared=1;
            }
        }
        if(appeared==1){
                continue;
        }
        int count=1;
        for(int k=i+1; k<n; k++){
            if(arr[k]==arr[i]){
            count++;
            } 
        }
            printf("element %d appears %d times.\n",arr[i],count);
    }
    return 0;
}