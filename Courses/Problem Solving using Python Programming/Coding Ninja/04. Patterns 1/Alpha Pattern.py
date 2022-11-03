# Print the following pattern for the given N number of rows.
# Pattern for N = 3
# A
# BB
# CCC

N = int(input())
i = 1
while i <= N:
    j = 1
    while j <= i:
        print(chr(ord("A") + i - 1), end = "")
        j = j + 1
    print()
    i = i + 1
