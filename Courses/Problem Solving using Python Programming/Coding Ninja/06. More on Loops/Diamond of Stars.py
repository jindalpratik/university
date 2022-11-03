#Print the following pattern for the given number of rows.
#Note: N is always odd.
#Pattern for N = 5
#  *
# ***
#*****
# ***
#  *

n = int(input())
if n%2 != 0:
    for i in range(1,n//2 + 2):
        j = 1
        # print(j)
        spaces = 1
        while spaces <= (n//2 - i + 1):
            print(" ", end = "")
            spaces = spaces + 1
        while j <= (i*2)-1:
            print("*", end = "")
            j = j + 1
        print()
    for i in range(1, n - n//2):
        j = 1
        # print(j)
        spaces = n//2
        while spaces >= (n//2 - i + 1):
            print(" ", end = "")
            spaces = spaces - 1
        while j <= ((n - n//2) - i)*2 - 1:
            print("*", end = "")
            j = j + 1
        print()
else:
    print("not an odd number")