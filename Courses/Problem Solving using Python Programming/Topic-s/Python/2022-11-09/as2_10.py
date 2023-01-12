li = input().split()
n = int(input("To find words greater in length than: "))
count = 0
for i in range(len(li)):
    if len(li[i]) > n:
        count += 1
print(count)