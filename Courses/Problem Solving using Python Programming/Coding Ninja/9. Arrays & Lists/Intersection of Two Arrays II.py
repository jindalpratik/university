# You have been given two integer arrays/list(ARR1 and ARR2) of size N and M, respectively. You need to print their intersection; An intersection for this problem can be defined when both the arrays/lists contain a particular value or to put it in other words, when there is a common value that exists in both the arrays/lists.


import sys

def intersections(li_n, li_m) :
    for n in range(len(li_n)):
        flag = False
        # print(li_n[n],li_n[:n],li_n[(n + 1):])
        if li_n[n] in li_m:
            flag = True
        if flag:
            print(li_n[n], end = " ")

#Taking Input Using Fast I/O
def takeInput() :
    n = int(sys.stdin.readline().strip())
    if n == 0:
        return list(), 0

    arr = list(map(int, sys.stdin.readline().strip().split(" ")))
    return arr, n

#main
t = int(sys.stdin.readline().strip())

while t > 0 :
    arr1, n = takeInput()
    arr2, m = takeInput()

    intersections(arr1, arr2)
    print()

    t -= 1