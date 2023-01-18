# 1.	Write a Python program to replace last value of tuples in a list.
# Sample list: [(10, 20, 40), (40, 50, 60), (70, 80, 90)]
# Expected Output: [(10, 20, 100), (40, 50, 100), (70, 80, 100)]

li = [(10, 20, 40), (40, 50, 60), (70, 80, 90)]
ele = int(input('The element you want to replace in the tuple with: '))
for i in range(len(li)):
    li_temp = list(li[i])
    li_temp[-1] = ele
    li[i] = tuple(li_temp)
print(li)
