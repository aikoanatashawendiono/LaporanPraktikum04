#include<stdio.h>

int main() {
    int awal, akhir, angka1, angka2;

    printf("Input: ");
    scanf("%d %d", &angka1, &angka2);

    if (angka1 > angka2){
        for (awal = angka1, akhir = angka2; awal >= angka2, akhir <= angka1; awal--, akhir++ ){
            printf("%d %d ", awal, akhir);
            if (awal == angka2){
                break;
            } else {
                printf("- ");
            }
            
        }

    }
    else {
        for (awal = angka1, akhir = angka2; awal <= angka2, akhir >= angka1; awal++, akhir--){
            printf("%d %d ", awal, akhir);
            if (awal == angka2){
                break;
            }
            else {
                printf("- ");
            }
        }
    }

return 0;
}
