# Print the following pattern for the given number of rows.
# Pattern for N = 5
# E
# DE
# CDE
# BCDE
# ABCDE

N = int(input())
i = 1
while i <= N:
    j = 1
    initial_char = ord("A") + N - i
    #print(initial_char)
    while j <= i:
        print(chr(initial_char + j - 1), end = "")
        #print(initial_char + j - 1)
        j = j + 1
    print()
    i = i + 1