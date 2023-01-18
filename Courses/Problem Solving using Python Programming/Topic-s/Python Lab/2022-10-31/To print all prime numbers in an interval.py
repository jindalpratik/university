start = int(input())
end = int(input())
for i in range(start, end+1):
    n = 2
    flag = True
    while n < i:
        if i%n == 0:
            flag = False
            break
        n = n+1
    if flag:
        print(i)