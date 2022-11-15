# Provided with a random integer array/list(ARR) of size N, you have been required to sort this array using 'Insertion Sort'.

from sys import stdin

def insertionSort(arr, n) :  
    for i in range(1,n):
        min_index = i
        for f in range(i-1,-1,-1):
            if arr[f] > arr[min_index]:
                arr[f],arr[min_index] = arr[min_index],arr[f]
                min_index = f
            else:
                break



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
    insertionSort(arr, n)
    printList(arr, n)
    t-= 1