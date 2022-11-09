from sys import stdin

def rowWiseSum(mat, nRows, mCols):
    n = 0
    for i in range(nRows):
        for j in range(nRows - n):
            for f in range(mCols):
                print(mat[i][f], end = " ")
            print()
        n = n + 1

#Taking Input Using Fast I/O
def take2DInput() :
    li = stdin.readline().rstrip().split(" ")
    nRows = int(li[0])
    mCols = int(li[1])
    if nRows == 0 :
        return list(), 0, 0
    mat = [list(map(int, input().strip().split(" "))) for row in range(nRows)]
    return mat, nRows, mCols


mat, nRows, mCols = take2DInput()
rowWiseSum(mat, nRows, mCols)