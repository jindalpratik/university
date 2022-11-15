# You have been given two sorted arrays/lists(ARR1 and ARR2) of size N and M respectively, merge them into a third array/list such that the third array is also sorted.

from sys import stdin
def merge(arr1, n, arr2, m) :
    arr1.append(2*10**23)
    arr2.append(2*10**23)
    index_arr1 = 0
    index_arr2 = 0
    index_merge = 0
    sorted_arr = []
    # print(arr1, n , arr2, m)
    while index_merge < n + m:
        # print(index_arr1, index_arr2, arr1[index_arr1], arr2[index_arr2])
        if arr1[index_arr1] < arr2[index_arr2]:
            sorted_arr.append(arr1[index_arr1])
            # print("in if", arr1[index_arr1], arr2[index_arr2])
            index_merge += 1
            if index_arr1 == n:
                continue
            else:
                index_arr1 += 1
        elif arr2[index_arr2] <= arr1[index_arr1]:
            sorted_arr.append(arr2[index_arr2])
            # print("in elif", arr1[index_arr1], arr2[index_arr2])
            index_merge += 1
            if index_arr2 == m:
                continue
            else:
                index_arr2 += 1
        # print(sorted_arr)
    # print(sorted_arr)
    return sorted_arr

#Taking Input Using Fast I/O
def takeInput() :
    n = int(stdin.readline().rstrip())
    if n != 0:
        arr = list(map(int, stdin.readline().rstrip().split(" ")))
        return arr, n
    return list(), 0


#to print the array/list
def printList(arr, n) : 
    for i in range(n) :
        print(arr[i], end = " ")       
    print()


#main
t = int(stdin.readline().rstrip())

while t > 0 :
    arr1, n = takeInput()
    arr2, m = takeInput()
    ans = merge(arr1, n, arr2, m)
    printList(ans, (n + m))
    t -= 1