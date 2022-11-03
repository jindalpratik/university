# Print the following pattern for the given N number of rows.
# Pattern for N = 4
# 1234
# 123
# 12
# 1

N = int(input())
j = N
while j >= 1:
    i = j
    n = 1
    while i >= 1:
        print(n, end = "")
        i = i - 1
        n = n + 1
    print()
    j = j - 1