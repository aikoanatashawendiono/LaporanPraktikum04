while True:
    print("Pilih program")
    print("1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n5. Exit")
    opsi = int(input("Masukkan Pilihan: "))

    if 1 <= opsi <= 4:
        angka1 = int(input("Masukkan nilai pertama: "))
        angka2 = int(input("Masukkan nilai kedua: "))

        if opsi == 1:
            hasil = angka1 + angka2
            print(f"Hasil penjumlahan antara {angka1}.00 dengan {angka2}.00 adalah {hasil:.2f}\n")
        elif opsi == 2:
            hasil = angka1 - angka2
            print(f"Hasil pengurangan antara {angka1}.00 dengan {angka2}.00 adalah {hasil:.2f}\n")
        elif opsi == 3:
            hasil = angka1 * angka2
            print(f"Hasil perkalian antara {angka1}.00 dengan {angka2}.00 adalah {hasil:.2f}\n")
        elif opsi == 4:
            if angka2 != 0:
                hasil = angka1 / angka2
                print(f"Hasil pembagian antara {angka1}.00 dengan {angka2}.00 adalah {hasil:.2f}\n")
            else:
                print("Input anda salah, bilangan tidak bisa dibagi\n")
                continue
    elif opsi == 5:
        print("Terimakasih, telah menggunakan kalkulator Aiko Anatasha Wendiono\n\n")
        break
    else:
        print("Input anda salah, silahkan coba lagi\n\n")
