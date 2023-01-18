# 1. Write a program that accepts a list from user and print the alternate element
# of list.

li = input("Please enter elements for the list with spaces: ").split()
for i in range(0,len(li),2):
    print(li[i])