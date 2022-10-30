# Print the following pattern for given number of rows.

N = int(input())
i = 1
while i <= N:
    j = 1
    while j <= N:
        if j == (N - i + 1):
            print("*", end = "")
            j = j + 1
        else:
            print(N - j + 1, end = "")
            j = j + 1
    print()
    i = i + 1