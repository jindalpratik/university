# For a given two-dimensional integer array/list of size (N x M), print the array/list in a sine wave order, i.e, print the first column top to bottom, next column bottom to top and so on.

from sys import stdin

def wavePrint(mat, nRows, mCols):
    for i in range(mCols):
        if i%2 == 0:
            for j in range(nRows):
                print(mat[j][i], end = " ")
        else:
            for j in range(nRows-1,-1,-1):
                print(mat[j][i], end = " ")         

#Taking Iput Using Fast I/O
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
    wavePrint(mat, nRows, mCols)
    print()
    t -= 1