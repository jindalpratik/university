# You have been given a random integer array/list(ARR) of size N. Write a function that rotates the given array/list by D elements(towards the left).

from sys import stdin


def rotate(arr, n, d):
    for i in range(d):
        for n in range(0,-len(arr)+1,-1):
            arr[n],arr[n-1] = arr[n-1],arr[n]
    return arr



#Taking Input Using Fats I/O
def takeInput() :
    n = int(stdin.readline().rstrip())
    if n == 0:
        return list(), 0

    arr = list(map(int, stdin.readline().rstrip().split(" ")))
    return arr, n


#to print the array/list 
def printList(arr, n) : 
    for i in range(n) :
        print(arr[i], end = " ")
    print()


#main
t = int(stdin.readline().rstrip())

while t > 0 :
    
    arr, n = takeInput()
    d = int(stdin.readline().rstrip())
    rotate(arr, n, d)
    printList(arr, n)
    
    t -= 1