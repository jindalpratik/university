# 4. Write a Python program to get a string from a given string where all occurrences of its first char have been changed to '$', except the first char itself.
# Sample String : 'restart'
# Expected Result : 'resta$t'

inp_str = input()
new_str = ""
for i in range(len(inp_str)):
    if i > 0 and inp_str[i] == inp_str[0]:
        new_str = new_str + "$"
    else:
        new_str = new_str + inp_str[i]
print(new_str)
