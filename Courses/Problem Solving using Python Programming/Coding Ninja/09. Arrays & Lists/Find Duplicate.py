# You have been given an integer array/list(ARR) of size N which contains numbers from 0 to (N - 2). Each number is present at least once. That is, if N = 5, the array/list constitutes values ranging from 0 to 3 and among these, there is a single integer value that is present twice. You need to find and return that duplicate number present in the array.

def find_unique(li_n):
    # print(type(n))
    for n in range(len(li_n)):
        flag = False
        # print(li_n[n],li_n[:n],li_n[(n + 1):])
        if li_n[n] in li_n[:n]:
            flag = True
        elif li_n[n] in li_n[(n + 1):]:
            flag = True
        if flag:
            print(li_n[n])
            break
run_times = int(input())
for i in range(run_times):
    n = int(input())
    li_n = [int(x) for x in input().split()]
    # print(li_n)
    find_unique(li_n)