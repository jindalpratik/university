li = input().split()
count = 0
for i in range(len(li)):
    if len(li[i]) >= 2 and li[i][0] == li[i][-1]:
        count = count + 1
print(count)