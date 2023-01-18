# 7.	Write a Python program that accepts a string from user. Your program should create a new string by shifting one position to left. For example if the user enters the string 'examination 2021' then new string would be 'xamination 2021e'.

# org_str_k= input()
org_str_k = "HELLO WORLD"
print("Original string is:", org_str_k)
print("New string is: ", end="")
org_str = []
for i in org_str_k:
    org_str.append(i)
for i in range(1, len(org_str)):
    print(org_str[i], end="")
print(org_str[0])
