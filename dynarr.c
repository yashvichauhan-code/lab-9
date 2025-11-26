#include<stdio.h>
#include<stdlib.h>
int main(){
    int n, index, num;
    printf("size: ");
    scanf("%d",&n);
    int *arr;
    arr=(int *)malloc(n*sizeof(int));
    printf("enter %d elements: ",n );
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("enter number to insert: ");
    scanf("%d", &num);
    printf("enter index: ");
    scanf("%d", &index);
    int i= 0, j= n - 1;
    arr=(int*)realloc(arr,(n+1)*sizeof(int));
    for (int i = n; i >= index; i--){
        arr[i] = arr[i - 1];
    }
    arr[index-1]=num;
    n++;
    //while (i<j) {
    //    int x = arr[i];
    //    arr[i] = arr[j];
    //    arr[j] = x;
    //    i++;
    //    j--;
    //}
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}

/*int main(){
    int n;
    printf("size: ");
    scanf("%d",&n);
    int *arr;
    arr=(int *)calloc(n, sizeof(int));
    //for(int i=0; i<n; i++){
    //    scanf("%d", &arr[i]);
    //}
    int i= 0, j= n - 1;
    while (i<j) {
        int x = arr[i];
        arr[i] = arr[j];
        arr[j] = x;
        i++;
        j--;
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}*/