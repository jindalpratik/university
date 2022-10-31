# You have been given a random integer array/list(ARR) and a number X. Find and return the number of triplets in the array/list which sum to X.

from sys import stdin

def pairSum(arr, n, x) :
    count = 0
    for i in range(n):
        # print(li_n[n],li_n[:n],li_n[(n + 1):])
        for f in range(i+1,n):
            for e in range(f+1,n):
                if arr[i] + arr[f] + arr[e] == x:
                    count = count + 1
    return count

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
    x = int(stdin.readline().strip())
    print(pairSum(arr, n, x))

    t -= 1