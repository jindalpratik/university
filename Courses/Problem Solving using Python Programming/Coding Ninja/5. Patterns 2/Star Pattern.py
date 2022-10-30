# Print the following pattern
# Pattern for N = 4
#   *
#  ***
# *****
#*******

N = int(input())
i = 1
while i <= N:
    spaces = 1
    while spaces <= N-i:
        print(" ",end = "")
        spaces = spaces + 1
    numbers = 1
    while numbers <= (i*2)-1:
        print("*", end = "")
        numbers = numbers + 1
    print()
    i = i + 1