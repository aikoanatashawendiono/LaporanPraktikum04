input = int(input("Input: "))

for i in range(1, input + 1, 2):
    print(i, end=" ")

print()

if (input % 2 == 0):
    for i in range(input, 1, -2):
        print(i, end=" ")
elif (input % 2 == 1):
    for i in range(input - 1, 1, -2):
        print(i, end=" ")
