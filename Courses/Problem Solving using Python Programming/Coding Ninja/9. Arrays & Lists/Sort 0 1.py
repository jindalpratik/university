# You have been given an integer array/list(ARR) of size N that contains only integers, 0 and 1. Write a function to sort this array/list. Think of a solution which scans the array/list only once and don't require use of an extra array/list.

from sys import stdin

def sort_and_print(arr, n) :
    li_0 = []
    li_1 = []
    for i in arr:
        if i == 0:
            li_0.append(i)
        elif i == 1:
            li_1.append(i)
    # print(li_0)
    # print(li_1)
    for x in li_1:
        li_0.append(x)
    # print(li_0)
    for w in range(len(li_0)):
        print(li_0[w], end = " ")        


#Taking Input Using Fast I/O
def takeInput() :
    n = int(stdin.readline().strip())
    if n == 0 :
        return list(), 0
    arr = list(map(int, stdin.readline().strip().split(" ")))
    return arr, n


#main
t = int(stdin.readline().strip())

while t > 0 :
    arr, n = takeInput()
    sort_and_print(arr, n)
    print()
    t -= 1


# Another method which exceeds time limit most of the time.
# from sys import stdin

# def sortZeroesAndOne(arr,n) :
#     for i in range(len(arr)):
#             for f in range(i+1,n):
#                 if arr[i] == 1 and arr[f] == 0:
#                     arr[i],arr[f] = arr[f],arr[i]
#                     # print(arr)
#     return arr


# #Taking Input Using Fast I/O
# def takeInput() :
#     n = int(stdin.readline().strip())
#     if n == 0 :
#         return list(), 0
#     arr = list(map(int, stdin.readline().strip().split(" ")))
#     return arr, n


# def printList(arr, n) :
#     for i in range(n) :
#         print(arr[i], end = ' ')
#     print()

# #main
# t = int(stdin.readline().strip())

# while t > 0 : 
#     arr, n = takeInput()
#     sortZeroesAndOne(arr, n)
#     printList(arr, n)
#     print()
#     t -= 1