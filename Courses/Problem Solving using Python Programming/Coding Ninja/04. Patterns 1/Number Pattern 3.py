#Print the following pattern for the given N number of rows.
#Pattern for N = 4
#1
#11
#121
#1221

N = int(input())
i = 1
while i <= N:
    j = 1
    while j <= i:
        if i == 1:
            print(1, end = "")
        else:
            if j == i or j == 1:
                print(1, end = "")
            else:
                print(2, end = "")
        j = j + 1
    print()
    i = i + 1
