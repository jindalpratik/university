# 3. Find and display the largest number of a list without using built-in function
# max(). Your program should ask the user to input values in list from keyboard.

li = [int(x) for x in input().split()]

# print(li)
# largest = li[0]
# for i in li:
#     # print(i)
#     if i > largest:
#         largest = i
# print(largest)

index = 0
for i in range(len(li[1:])):
    if li[i] > li[index]:
        index = i
print(li[index])
