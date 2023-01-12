li = [int(x) for x in input().split()]
# print(li)
smallest = 2*10**23
for i in li:
    # print(i)
    if i < smallest:
        smallest = i
print(smallest)