li = input().split()
li_new = []
print(li)
for i in range(len(li)):
    if i == 0 or i == 4 or i == 5:
        continue
    else:
        li_new.append(li[i])
print(li_new)