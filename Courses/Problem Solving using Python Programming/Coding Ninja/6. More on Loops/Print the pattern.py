#Print the following pattern for the given number of rows.
#Pattern for N = 5
# 1 2 3 4 5
# 11 12 13 14 15
# 21 22 23 24 25
# 16 17 18 19 20
# 6 7 8 9 10

def the_series(N, start):
    for i in range(N):
        print(start, end = " ")
        start = start + 1

N = int(input())
if N%2 == 0:
    for i in range(N//2):
        start = (N*(i*2)) + 1
        the_series(N, start)
        print()
    for i in range((N//2) - 1, -1, -1):
        start = (N*(i*2)) + N + 1
        the_series(N, start)
        print()
else:
    for i in range(N//2 + 1):
        start = (N*(i*2)) + 1
        the_series(N, start)
        print()
    for i in range((N//2) - 1, -1, -1):
        start = (N*(i*2)) + N + 1
        the_series(N, start)
        print()

# This is something I wrote before and is completely wrong.
# N = int(input())
# j = 1
# for i in range(N):
#     print(j, end = " ")
#     j = j + 1
# print()
# n = (j * 2) - 1
# for i in range(N):
#     print(n, end = " ")
#     n = n + 1
# print()
# for i in range(N):
#     print(n, end = " ")
#     n = n + 1
# print()
# for i in range(N):
#     print(j, end = " ")
#     j = j + 1
# ##