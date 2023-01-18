# 8.	Write a Python program that accepts a string from user. Your program should create a new string in reverse of first string and display it.
# For example if the user enters the string 'EXAM' then new string would be 'MAXE'

# org_str_k= input()
org_str_k = "HELLO WORLD"
print("Original string is:", org_str_k)
print("New string is: ", end="")
org_str = []
for i in org_str_k:
    org_str.append(i)
for i in range(len(org_str)-1, -1, -1):
    print(org_str[i], end="")
