# 10. Write a Python program to change a given string to a new string where the first and last chars have been exchanged.

inp_str = input()
new_str = inp_str[-1] + inp_str[1:len(inp_str)-1] + inp_str[0]
print("Original string is: ", inp_str)
print("New string is: ", new_str)