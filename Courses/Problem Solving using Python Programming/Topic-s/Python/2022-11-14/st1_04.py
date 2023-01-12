# 4. Rohan and Ajay are playing a game. The game says, they have been given a list of numbers and they have to find out a pair in the list having maximum sum. Ajay is confused and is not able to find the required pair, help him to find the solution.
# You have given a list A containing N elements. Your task is to find the pair of numbers in the list 
# having maximum sum.
# Write a python program which takes the size N and the list A as input and print the maximum sum 
# pair separated by space as the output.

n = int(input())
li = []
for i in range(n):
    li.append(int(input()))
max1 = 0
index_1 = 0
for j in range(len(li)):
    if li[j] > max1:
        index_1 = j
        max1 = li[j]
# print(max1, index_1)
max2 = 0
index_2 = 0
for k in range(len(li)):
    if k == index_1:
        continue
    if li[k] > max2:
        index_2 = k
        max2 = li[k]
# print(max2, index_2)
if index_1 < index_2:
    print(li[index_1], li[index_2])
else:
    print(li[index_2], li[index_1])