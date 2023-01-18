# 4. Write a Python program that accepts a comma separated sequence of words as input and prints the unique words in sorted form (alphanumerically). 
# Sample Words : red, white, black, red, green, black
# Expected Result : black, green, red, white

li = input().split(",")
li.sort()
new_li = []
for i in li:
    if i not in new_li:
        new_li.append(i)
for i in new_li:
    print(i, end=", ")
