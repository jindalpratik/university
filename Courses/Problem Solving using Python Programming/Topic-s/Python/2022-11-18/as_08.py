# 8. Write a Python function that takes a list of words and return the longest word and the length of the longest one.
# Sample Output:
# Longest word: Exercises
# Length of the longest word: 9

li = input().split()
max_len = 0
index = 0
for i in range(len(li)):
    if len(li[i]) > max_len:
        max_len = len(li[i])
        index = i
print("Longest word: ", li[index], "\nLength of the longest word: ", max_len)
