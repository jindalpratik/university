# You have been given an integer array/list(ARR) of size N that contains only integers, 0 and 1. Write a function to sort this array/list. Think of a solution which scans the array/list only once and don't require use of an extra array/list.

from sys import stdin

def sortZeroesAndOne(arr,n) :
    zeroPos = 0
    for current in range(len(arr)):
        if arr[current] == 0:
            arr[current], arr[zeroPos] = arr[zeroPos], arr[current]
            zeroPos = zeroPos + 1
    return arr


#Taking Input Using Fast I/O
def takeInput() :
    n = int(stdin.readline().strip())
    if n == 0 :
        return list(), 0
    arr = list(map(int, stdin.readline().strip().split(" ")))
    return arr, n


def printList(arr, n) :
    for i in range(n) :
        print(arr[i], end = ' ')
    print()

#main
t = int(stdin.readline().strip())

while t > 0 : 
    arr, n = takeInput()
    sortZeroesAndOne(arr, n)
    printList(arr, n)
    print()
    t -= 1