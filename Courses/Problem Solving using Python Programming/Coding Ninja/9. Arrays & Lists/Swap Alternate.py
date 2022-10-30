# You have been given an array/list(ARR) of size N. You need to swap every pair of alternate elements in the array/list.
# You don't need to print or return anything, just change in the input array itself.

def replace_alt(li_n,n):
    run_range = n
    # print(type(n))
    for i in range(1,((n//2)+1)):
        # print(i)
        li_n[i*2-1],li_n[i*2-2] = li_n[i*2-2],li_n[i*2-1]
        # print(li_n)
    return li_n


run_times = int(input())
for i in range(run_times):
    # just taking the number of items no real use.
    n = int(input())
    li_n = [int(x) for x in input().split()]
    # print(li_n)
    alt_li = replace_alt(li_n,n)
    for x in alt_li:
        print(x,end = " ")
    print()