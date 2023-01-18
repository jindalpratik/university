# 4. Write a program that rotates the element of a list so that the element at the
# first index moves to the second index, the element in the second index moves to
# the third index, etc., and the element in the last index moves to the first index.

li = input().split()
# for n in range(0,-len(li)+1,-1):
#     li[n],li[n-1] = li[n-1],li[n]
# print(li)

print(li[-1], end=" ")
for i in li[:len(li)-1]:
    print(i, end=" ")
