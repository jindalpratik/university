# You have been given a sorted(in ascending order) integer array/list(ARR) of size N and an element X. Write a function to search this element in the given input array/list using 'Binary Search'. Return the index of the element in the input array/list. In case the element is not present in the array/list, then return -1.


from sys import stdin


def binarySearch(arr, n, x) :
    lower = 0
    upper = n-1
    # print(lower)
    # print(upper)
    while upper >= lower:
        # print(upper, lower)
        middle = (upper + lower)//2
        if arr[middle] == x:
            return middle
        elif x > arr[middle]:
            lower = middle + 1
        elif x < arr[middle]:
            upper = middle - 1
    else:
        return -1




#Taking Input Using Fast I/O
def takeInput() :
    n = int(stdin.readline().strip())
    if n == 0 :
        return list(), 0
    arr = list(map(int, stdin.readline().strip().split(" ")))
    return arr, n


#main
arr, n = takeInput()
t = int(stdin.readline().strip())

while t > 0 : 
    x = int(input().strip())    
    print(binarySearch(arr, n, x))
    t -= 1