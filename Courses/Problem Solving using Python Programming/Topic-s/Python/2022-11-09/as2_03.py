li = [int(x) for x in input().split()]
# print(li)
largest = -2*10**23
for i in li:
    # print(i)
    if i > largest:
        largest = i
print(largest)