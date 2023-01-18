
# 6. Write a Python program to add 'ing' at the end of a given string (length should be at least 3). If the given string already ends with 'ing' then add 'ly' instead. If the string length of the given string is less than 3, leave it unchanged.
# Sample String : 'abc'
# Expected Result : 'abcing'
# Sample String : 'string'
# Expected Result : 'stringly'

inp_str = input()
new_str = inp_str
if "ing" in inp_str and len(inp_str) > 2:
    new_str = inp_str + "ly"
elif len(inp_str) > 2:
    new_str = inp_str + "ing"
print(new_str)
