# Print the following pattern for the given N number of rows.
# Pattern for N = 4
#    1
#   12
#  123
# 1234

N = int(input())
i = 1
while i <= N:
    spaces = 1
    while spaces <= N-i:
        print(" ",end = "")
        spaces = spaces + 1
    numbers = 1
    while numbers <= i:
        print(numbers, end = "")
        numbers = numbers + 1
    print()
    i = i + 1