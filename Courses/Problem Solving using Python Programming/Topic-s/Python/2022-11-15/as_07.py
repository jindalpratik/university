# 7. Write a Python program to insert an element before each element of a list.

list = input().split()
print("Original List : ", list)
new = []
pre = input("Enter something to insert before each element in list: ")
for i in list:
    new.append(pre)
    new.append(i)
print("New list: ", new)
