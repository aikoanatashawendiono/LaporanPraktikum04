angka1, angka2 = map(int, input("Input: ").split())

if angka1 > angka2:
    awal, akhir = angka1, angka2
    awal_2, akhir_2 = -1, 1
else:
    awal, akhir = angka1, angka2
    awal_2, akhir_2 = 1, -1

while True:
    print(f"{awal} {akhir}", end=" ")
    if awal == angka2:
        break
    else:
        print("- ", end="")
    awal += awal_2
    akhir += akhir_2
