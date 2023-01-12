li = input().split() # Taken a string input cause isn't specified if the input will be int or str.
li_new = []
for i in range(len(li)):
    flag = False
    for f in range(i+1, len(li)):
        if li[i] == li[f]:
            flag = True
            break
    if not flag:
        li_new.append(li[i])
print(li_new)