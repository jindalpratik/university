# Print the following pattern for the given number of rows.
# Pattern for N = 4
#    1
#   212
#  32123
# 4321234

N = int(input())
i = 1
while i <= N:
    spaces = 1
    p = i
    while spaces <= N-i:
        print(" ",end = "")
        spaces = spaces + 1
    numbers = p
    while numbers > 0:
        print(numbers, end = "")
        numbers = numbers - 1
    numbers = numbers + 2
    while numbers <= p:
        print(numbers, end = "")
        numbers = numbers + 1
    print()
    i = i + 1
    p = p + 1