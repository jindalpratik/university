li_n = [int(x) for x in input().split()]
li_n.sort()
li = []
for ele in li_n:
    # print(ele)
    if ele not in li:
        li.append(ele)
print(li[-2])
