a, y = input().split()
s = int(a)
for i in range(1, 51):
    if (i % s == 0):
        print(y, end=" ")
    else:
        print(i, end=" ")

print()
