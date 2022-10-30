# Print the following pattern for the given number of rows.
# Assume N is always odd.
# Note : There is space after every star.
# Pattern for N = 7
#*
# * *
#  * * *
#   * * * *
#  * * *
# * *
#*

n = int(input())
if n%2 != 0:
    for i in range(1,n//2 + 2):
        j = 1
        # print(j)
        spaces = 2
        while spaces <= i:
            print(" ", end = "")
            spaces = spaces + 1
        while j <= i:
            print("*", end = " ")
            j = j + 1
        print()
    for i in range(1, n - n//2):
        j = 1
        # print(j)
        spaces = 1
        while spaces <= (n - n//2) - i - 1:
            print(" ", end = "")
            spaces = spaces + 1
        while j <= (n - n//2) - i:
            print("*", end = " ")
            j = j + 1
        print()
else:
    print("not an odd number")
