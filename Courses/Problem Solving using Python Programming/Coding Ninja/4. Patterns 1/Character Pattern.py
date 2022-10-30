# Print the following pattern for the given N number of rows.
# Pattern for N = 4
# A
# BC
# CDE
# DEFG

N = int(input())
i = 1
while i <= N:
    j = 1
    initial_char = ord("A") + i - 1
    while j <= i:
        print(chr(initial_char + j - 1), end = "")
        j = j + 1
    print()
    i = i + 1
