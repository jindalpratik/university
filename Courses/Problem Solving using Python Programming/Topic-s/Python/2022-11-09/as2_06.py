li = [(2, 5), (1, 2), (4, 4), (2, 3), (2, 1)]
# print(li)
i = 0
while i <= len(li)-1:
    # print(li[i][-1], i)
    for f in range(i+1, len(li)):
        if li[i][-1] > li[f][-1]:
            # print(li[i][-1], i)
            li[i],li[f] = li[f],li[i]
            # print(li, i)
    i = i + 1
print(li)