#include <stdio.h>

int main(){
    int a, b, j, i, total, hasil, nilai;

    printf("Input: ");
    scanf("%d %d", &a, &b);

    for (i = 1; i <= a; i++){
        hasil = 0;
        total = 0;

        for (j = i; j >= 1; j--) {
            printf("(%d * %d)", j, b);

            nilai = j * b;
            (hasil += nilai); (total += nilai);
            if (j > 1){
                printf(" + ");
            }
        }
        printf(" = %d\n", hasil);
    }
    printf("%d\n", total);
    return 0;
}
