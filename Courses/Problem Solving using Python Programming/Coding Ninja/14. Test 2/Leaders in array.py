n = int(input())
li_n = [int(x) for x in input().split()]
for i in range(n):
    flag = False
    for j in range(i+1, n):
        if li_n[i] < li_n[j]:
            flag = True
            break
    if not flag:
        print(li_n[i], end = " ")