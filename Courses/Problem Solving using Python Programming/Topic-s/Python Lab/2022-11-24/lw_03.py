# 3.	Write a Python program to check if a specified element presents in a tuple of tuples.
# Original list:
# (('Red', 'White', 'Blue'), ('Green', 'Pink', 'Purple'), ('Orange', 'Yellow', 'Lime'))
# Check if White present in said tuple of tuples!
# True
# Check if Olive present in said tuple of tuples!
# False

tup_1 = (('Red', 'White', 'Blue'), ('Green', 'Pink',
         'Purple'), ('Orange', 'Yellow', 'Lime'))
flag = False
ele = input()
for i in range(len(tup_1)):
    for j in range(len(tup_1[i])):
        if tup_1[i][j] == ele:
            flag = True
            break
    if flag:
        break
print(flag)
