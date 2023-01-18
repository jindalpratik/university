# 3. Write a Python program to create a tuple with numbers and print one item. 

tup = tuple([int(x) for x in input().split()])
x =  int(input("Enter index of number to print: "))
print("Number associated with that index is:" , tup[x])