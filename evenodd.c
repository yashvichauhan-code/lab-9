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
    int *odd, *even, j=0, k=0;
    odd=(int *)malloc(n*sizeof(int));
    even=(int *)malloc(n*sizeof(int));
    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            even[j]=arr[i];
            j++;
        }
        else{
            odd[k]=arr[i];
            k++;
        }
    }
    printf("even: ");
    for(int i=0; i<j; i++){
        printf("%d ", even[i]);
    }
    printf("\nodd: ");
    for(int i=0; i<k; i++){
        printf("%d ", odd[i]);
    }
    return 0;
}