# Print the following pattern for the given number of rows.
# Pattern for N = 4
#   1
#  232
# 34543
#4567654

N = int(input())
i = 1
p = 1
while i <= N:
    spaces = 1
    while spaces <= N-i:
        print(" ",end = "")
        spaces = spaces + 1
    numbers = p
    while numbers <= (i*2)-1:
        print(numbers, end = "")
        numbers = numbers + 1
    numbers = numbers - 2
    while numbers >= p:
        print(numbers, end = "")
        numbers = numbers - 1
    print()
    i = i + 1
    p = p + 1
