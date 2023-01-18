# 2. Write a program that accepts a list from user. Your program should reverse
# the content of list and display it. Do not use reverse() method.

li = input().split()
rev_li = []
for i in li[::-1]:
    rev_li.append(i)
print(rev_li)