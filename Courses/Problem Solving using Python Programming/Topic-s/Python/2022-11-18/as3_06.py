# 6.	Write a Python program that accepts a string from user. Your program should create and display a new string where the first and last characters have been exchanged. For example if the user enters the string 'HELLO' then new string would be 'OELLH'.

# org_str_k= input()
org_str_k = "HELLO WORLD"
org_str = []
for i in org_str_k:
    org_str.append(i)
org_str[-1], org_str[0] = org_str[0], org_str[-1]
new_str = ""
for i in org_str:
    new_str = new_str + i
print("Original string is:", org_str_k, "\nNew string is:", new_str)
