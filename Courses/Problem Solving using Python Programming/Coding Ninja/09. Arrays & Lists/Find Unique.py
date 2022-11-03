# You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].
# Now, in the given array/list, 'M' numbers are present twice and one number is present only once.
# You need to find and return that number which is unique in the array/list.
#  Note:

# Unique element is always present in the array/list according to the given condition.

def find_unique(li_n):
    # print(type(n))
    for n in range(len(li_n)):
        flag = False
        # print(li_n[n],li_n[:n],li_n[(n + 1):])
        if li_n[n] in li_n[:n]:
            flag = True
        elif li_n[n] in li_n[(n + 1):]:
            flag = True
        if not flag:
            print(li_n[n])
run_times = int(input())
for i in range(run_times):
    n = int(input())
    li_n = [int(x) for x in input().split()]
    # print(li_n)
    find_unique(li_n)
