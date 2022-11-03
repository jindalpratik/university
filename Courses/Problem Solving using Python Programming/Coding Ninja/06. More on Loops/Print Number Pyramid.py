#Print the following pattern for a given n.
#For eg. N = 6

#123456
# 23456
#  3456
#   456
#    56
#     6
#    56
#   456
#  3456
# 23456
#123456

N = int(input())
P = N
for i in range(1, N + 1):
    while P < N:
        print(" ", end = "")
        P = P + 1
    j = i
    for num in range(1, N+1):
        while j <= N:
            print(j, end = (""))
            j = j + 1
    P = P - i
    print()
P = 2
for i in range(N - 1, 0, -1):
    Q = P
    while Q < N:
        print(" ", end = "")
        Q = Q + 1
    j = i
    for num in range(1, N+1):
        while j <= N:
            print(j, end = (""))
            j = j + 1
    P = P + 1
    print()
