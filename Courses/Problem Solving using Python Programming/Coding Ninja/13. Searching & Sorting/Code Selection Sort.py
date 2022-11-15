# Provided with a random integer array/list(ARR) of size N, you have been required to sort this array using 'Selection Sort'.

from sys import stdin

def selectionSort(arr, n) :
    start = 0
    while start < n -1:
        minimum = arr[start]
        index = start
        flag = False
        for i in range(start+1, len(arr)):
            if minimum > arr[i]:
                flag = True
                index = i
                minimum = arr[i]
        if flag:
            arr[start],arr[index] = arr[index],arr[start]
        start += 1



#Taking Input Using Fast I/O
def takeInput() :
    n = int(stdin.readline().strip())
    if n == 0 :
        return list(), 0
    arr = list(map(int, stdin.readline().strip().split(" ")))
    return arr, n

#to print the array/list
def printList(arr, n) : 
    for i in range(n) :
        print(arr[i], end = " ")
    print()


#main
t = int(stdin.readline().strip())

while t > 0 : 
    arr, n = takeInput()
    selectionSort(arr, n)
    printList(arr, n)
    t-= 1