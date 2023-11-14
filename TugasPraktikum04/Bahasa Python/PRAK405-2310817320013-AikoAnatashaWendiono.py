a, b = map(int, input("Input: ").split())
total = 0
hasil = 0

for i in range(1, a + 1):

    for j in range(i, 0, -1):
        print(f"({j} * {b})", end="")
        
        nilai = j * b
        hasil += nilai
        total += nilai

        if (j > 1):
            print(" + ", end="")

    print(f" = {hasil}")
print(total)
