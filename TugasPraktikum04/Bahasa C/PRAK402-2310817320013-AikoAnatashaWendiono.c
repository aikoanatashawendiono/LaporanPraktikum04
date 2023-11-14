#include<stdio.h>

int main(){

    int i, input;

    printf("Input: ");
    scanf("%d", &input);
    
    for (i = 1; i <= input; i = i + 2){
        printf("%d ", i);
    } printf("\n");
    if (input % 2 ==0){
        for (i = input; i >= 2; i = i - 2){
            printf("%d ", i);
        }
    }
    else if (input % 2 == 1){
        for (i = input - 1; i >= 2; i = i - 2){
            printf("%d ", i);
        }
    }
     return 0;
    
}
