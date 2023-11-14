#include<stdio.h>

int main() {
    int opsi, angka1, angka2;
    float hasil;

    do {
        printf("Pilih program\n");
        printf("1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n5. Exit\n");
        printf("Masukkan Pilihan : ");
        scanf("%d", &opsi);

        if (opsi >= 1 && opsi <= 4) {
            printf("Masukkan nilai pertama : ");
            scanf("%d", &angka1);
            printf("Masukkan nilai kedua : ");
            scanf("%d", &angka2);

            switch (opsi) {
                case 1:
                    hasil = angka1 + angka2;
                    printf("Hasil penjumlahan antara %d.00 dengan %d.00 adalah %.2f\n\n", angka1, angka2, hasil);
                    break;

                case 2:
                    hasil = angka1 - angka2;
                    printf("Hasil pengurangan antara %d.00 dengan %d.00 adalah %.2f\n\n", angka1, angka2, hasil);
                    break;

                case 3:
                    hasil = angka1 * angka2;
                    printf("Hasil perkalian antara %d.00 dengan %d.00 adalah %.2f\n\n", angka1, angka2, hasil);
                    break;

                case 4:
                    if (angka2 != 0) {
                        hasil = (float)angka1 / angka2;
                        printf("Hasil pembagian antara %d.00 dengan %d.00 adalah %.2f\n\n", angka1, angka2, hasil);
                    } else {
                        printf("Input anda salah, bilangan tidak bisa dibagi\n\n");
                        continue; 
                    }
                    break;
            }
        } else if (opsi == 5) {
            printf("Terimakasih, telah menggunakan kalkulator Aiko Anatasha Wendiono\n\n");
        } else {
            printf("Input anda salah, silahkan coba lagi\n\n");
            continue;  
        }

    } while (opsi != 5);

    return 0;
}

