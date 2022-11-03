#Print the following pattern for the given number of rows.
#Pattern for N = 4
#1111
#000
#11
#0

N = int(input())
for i in range(1, N+1):
    if i % 2 != 0:
        for j in range(N - i + 1, 0, -1):
            print(1, end = "")
    else:
        for j in range(N - i + 1, 0, -1):
            print(0, end = "")
    print()
