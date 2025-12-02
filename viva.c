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

   for (int i = 0; i < n; i++) {
        printf("enter name: ");
        scanf(" %[^\n]", s[i].name);
        printf("enter roll no: ");
        scanf("%d", &s[i].rollno);
        printf("enter percentage: ");
        scanf("%f", &s[i].percent);
    }
    sort(s, n);
    printf("\n\n students from highest to lowest percenage \n");
    printf("                       -                         \n");
    for(int i=0; i<n; i++){
        printf("name: %s\t", s[i].name);
        printf("roll no: %d\t", s[i].rollno);
        printf("percentage: %.3f\t\n", s[i].percent);
    }

    free(s);

    return 0;
}