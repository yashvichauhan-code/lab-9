#include <stdio.h>
#include <stdlib.h>
struct class{
    char name[15];
    int rollno;
    float percent;
};
void sort(struct class *s, int n){
    struct class temp;
    for(int i=0; i<n; i++){
         if(s[i].percent < s[i+1].percent){
                temp=s[i];
                s[i]=s[i+1];
                s[i+1]=temp;
            }
        for(int j=0; j<n-1; j++){
            if(s[j].percent < s[j+1].percent){
                temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
        }
    }

}
int main(){
    int n;
    printf("enter number of records you want to input: ");
    scanf("%d", &n);

    struct class *s = (struct class *)malloc(n* sizeof(struct class));

   
    free(s);

    return 0;
}