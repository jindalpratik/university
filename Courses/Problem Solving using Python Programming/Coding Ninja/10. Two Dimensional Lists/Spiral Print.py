# For a given two-dimensional integer array/list of size (N x M), print it in a spiral form. That is, you need to print in the order followed for every iteration:

# a. First row(left to right)
# b. Last column(top to bottom)
# c. Last row(right to left)
# d. First column(bottom to top)

#  Mind that every element will be printed only once.

def spiralPrint(mat, nRows, mCols):
    counter = 0
    row_start = 0
    column_start = 0
    row_end = nRows - 1
    column_end = mCols - 1
    # print(row_end)
    # print(column_end)
    while counter < mCols*nRows:
        if counter <= mCols*nRows:
            for i in range(column_start, column_end + 1):
                print(mat[row_start][i], end = " ")
                counter += 1
        # print("*")
        row_start += 1
        if counter <= mCols*nRows:
            for i in range(row_start,row_end + 1):
                print(mat[i][(column_end)], end = " ")
                counter += 1
        # print("*")
        column_end -= 1
        if counter < mCols*nRows:
            for i in range(column_end, column_start - 1, -1):
                print(mat[(row_end)][i], end = " ")
                counter += 1
        # print("*")
        row_end -= 1
        if counter < mCols*nRows:
            for i in range(row_end,row_start -1,-1):
                print(mat[i][column_start], end = " ")
                counter += 1
        # print("*")
        # row_end -= 1
        column_start += 1     


n = int(input())
for i in range(n):
    const = input().split()
    nRows,mCols = int(const[0]),int(const[1])
    mat = [[int(j) for j in input().split()] for i in range(nRows)]
    spiralPrint(mat, nRows, mCols)
    print()

