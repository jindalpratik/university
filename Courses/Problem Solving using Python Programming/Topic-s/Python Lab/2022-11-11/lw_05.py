# 5. Write a program that input a string and ask user to delete a given word from a
# string.

li_s = input().split()
delete = input("Please enter the word you would like to delete: ")
new_str = ""
for i in li_s:
    if i == delete:
        continue
    else:
        new_str = new_str + i + " "
print(new_str, "\t## Deleted word:", delete)