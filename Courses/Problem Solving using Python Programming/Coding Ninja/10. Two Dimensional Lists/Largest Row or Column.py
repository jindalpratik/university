# For a given two-dimensional integer array/list of size (N x M), you need to find out which row or column has the largest sum(sum of all the elements in a row/column) amongst all the rows and columns.

'''
    In order to print two or more integers in a line separated by a single 
    space then you may consider printing it with the statement, 

    print(str(num1) + " " + str(num2))
    Take Minimum value as MIN_VALUE = -2147483648

'''

from sys import stdin

def findLargest(arr, nRows, mCols):
    MIN_VALUE = -2147483648
    index = 0
    row_column = "row"
    for i in range(nRows):
        sum = 0
        for j in range(mCols):
            sum = sum + mat[i][j]
        if sum > MIN_VALUE:
            MIN_VALUE = sum
            row_column = "row"
            index = i
    for j in range(mCols):
        sum = 0
        for i in range(nRows):
            sum = sum + mat[i][j]
        if sum > MIN_VALUE:
            MIN_VALUE = sum
            row_column = "column"
            index = j
    print(row_column, index, MIN_VALUE)


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
    findLargest(mat, nRows, mCols)
    t -= 1