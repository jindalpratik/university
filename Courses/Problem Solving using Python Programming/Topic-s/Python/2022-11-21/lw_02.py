# 2. Write a Python program to count the occurrences of each word in a given sentence.

li = input().split()
dict = {}
for i in li:
    dict[i] = dict.get(i, 0) + 1
for i in dict:
    print("Word:", i, ":: Count:", dict[i])
