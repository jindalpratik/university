# 5.	Swap the columns: Given two positive integers m and n, m lines of n elements, giving an m×n matrix A, followed by two non-negative integers i and j less than n, swap columns i and j of A and print the result.

def swap_columns(arr, i, j):
    for f in range(len(arr)):
        arr[f][i], arr[f][j] = arr[f][j], arr[f][i]
    return arr


# m = int(input())
# n = int(input())
# li = []
# for i in range(m):
#     li.append([])
# for i in range(m):
#   li[i] = [int(x) for x in input().split()]
arr = [[11, 12, 13, 14], [21, 22, 23, 24], [31, 32, 33, 34]]
# i = int(input())
i = 0
# j = int(input())
j = 1
swap_columns(arr, i, j)
for p in range(len(arr)):
    for q in range(len(arr[p])):
        print(arr[p][q], end=" ")
    print()

# Alt method


def swap_columns(arr, i, j):
    for f in range(len(arr)):
        temp1 = arr[f][i]
        temp2 = arr[f][j]
        arr[f][j] = temp1
        arr[f][i] = temp2
    return arr


# m = int(input())
# n = int(input())
# li = []
# for i in range(m):
#     li.append([])
# for i in range(m):
#   li[i] = [int(x) for x in input().split()]
arr = [[11, 12, 13, 14], [21, 22, 23, 24], [31, 32, 33, 34]]
# i = int(input())
i = 0
# j = int(input())
j = 1
swap_columns(arr, i, j)
for p in range(len(arr)):
    for q in range(len(arr[p])):
        print(arr[p][q], end=" ")
    print()
