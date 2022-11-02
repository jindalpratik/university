# For a given two-dimensional integer array/list of size (N x M), print it in a spiral form. That is, you need to print in the order followed for every iteration:

# a. First row(left to right)
# b. Last column(top to bottom)
# c. Last row(right to left)
# d. First column(bottom to top)

#  Mind that every element will be printed only once.

from sys import stdin

def spiralPrint(mat, nRows, mCols):
    counter = 0
    row_start = 0
    column_start = 0
    row_end = nRows
    column_end = mCols
    while counter <= mCols*nRows:
        for i in range(column_start, column_end):
            print("#")
            print(mat[row_start][i], end = " ")
            counter += 1
        # print("*")
        row_start += 1
        for i in range(row_start,row_end):
            print(mat[i][(column_end-1)], end = " ")
            counter += 1
        # print("*")
        column_end -= 1
        for i in range(column_end - 1, column_start - 1, -1):
            print(mat[(row_end-1)][i], end = " ")
            counter += 1
        # print("*")
        row_end -= 1
        for i in range(row_end -1,row_start -1,-1):
            print(mat[i][column_start], end = " ")
            counter += 1
        # print("*")
        row_end -= 1
        column_start += 1     

#Taking Input Using Fast I/O
def take2DInput() :
    li = stdin.readline().rstrip().split(" ")
    nRows = int(li[0])
    mCols = int(li[1])    
    if nRows == 0 :
        return list(), 0, 0    
    mat = [list(map(int, input().strip().split(" "))) for row in range(nRows)]
    return mat, nRows, mCols

#main
t = int(stdin.readline().rstrip())

while t > 0 :
    mat, nRows, mCols = take2DInput()
    spiralPrint(mat, nRows, mCols)
    print()
    t -= 1
