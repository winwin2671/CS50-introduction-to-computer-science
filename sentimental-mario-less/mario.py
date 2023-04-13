n = int(input("Height:"))
if n < 1 or n > 8:
    n = int(input("Height:"))
for i in range(n):
    for k in range(n - i - 1):
        print(" ", end="")
    for j in range(i + 1):
        print("#", end="")
    print()
