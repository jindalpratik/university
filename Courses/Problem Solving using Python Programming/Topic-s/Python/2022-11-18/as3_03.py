# 3. Find the sum of each row of matrix of size m x n. For example, for the following matrix
# output will be like this:
# Sum of row 1 = 32
# Sum of row 2 = 31
# Sum of row 3 = 63

def row_sum(arr):
    for i in range(len(arr)):
        row_sum = 0
        for f in range(len(arr[i])):
            row_sum += arr[i][f]
        print("Sum of row", i+1, "is:", row_sum)


def col_sum(arr):
    for f in range(len(arr[0])):
        col_sum = 0
        for i in range(len(arr)):
            col_sum += arr[i][f]
        print("Sum of col", f+1, "is:", col_sum)


# arr = []
# for i in range(int(input())):
#     arr.append([int(x) for x in input().split()])
arr = [[2, 11, 7, 12], [5, 2, 9, 15], [8, 3, 10, 42]]
row_sum(arr)
col_sum(arr)
