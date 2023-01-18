# 10. A palindrome is a string that reads the same backward as forward. For example, the words dad,
# madam and radar are all palindromes. Write a programs that determines whether the string is a
# palindrome.

def reverse_str(inp_str):
    rev_str = ""
    for i in range(len(inp_str)-1, -1, -1):
        rev_str = rev_str + inp_str[i]
    return rev_str


inp_str = input()
rev_str = reverse_str(inp_str)
flag = True
for i in range(len(inp_str)):
    if inp_str[i] == rev_str[i]:
        continue
    flag = False
if flag:
    print(inp_str, "is a palindrome function")
else:
    print(inp_str, "is not a palindrome function")
