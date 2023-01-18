# 4.	Given an integer n, create a matrix of size (n×n) and populate it as follows, with spaces between each character:
# •	The positions on the minor diagonal (from the upper right to the lower left corner) receive 1.
# •	The positions above this diagonal recieve 0.
# •	The positions below the diagonal receive 2.

n = int(input())
li = []
for i in range(n):
    li.append([])
for i in range(n):
    for i in range(n):
        li[i].append(0)
count = 0
for i in range(len(li)):
    for j in range(len(li)):
        if j == len(li) - i - 1:
            # print(i,j,li[i])
            # count += 1
            li[i][j] = 1
            # print(i,j,li,count)
        elif j > len(li) - i - 1:
            li[i][j] = 2
# 2print(count)
# for i in range(len(li)):
#     for j in R
# print(li)
for i in range(n):
    for j in range(n):
        print(li[i][j], end=" ")
    print()
# print(count)
