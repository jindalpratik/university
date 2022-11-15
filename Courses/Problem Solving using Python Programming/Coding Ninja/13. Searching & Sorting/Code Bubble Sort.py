# Provided with a random integer array/list(ARR) of size N, you have been required to sort this array using 'Bubble Sort'.


from sys import stdin

def bubbleSort(arr, n):
    end = n-1
    while end > 1:
        for i in range(0,end):
            if arr[i] > arr[i+1]:
                arr[i],arr[i+1] = arr[i+1],arr[i]
        end -= 1



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
    bubbleSort(arr, n)
    printList(arr, n)
    t-= 1