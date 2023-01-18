# 9. Write a Python program to remove the nth index character from a nonempty string. 

inp_str = input()
n = int(input())
new_str = ""
for i in range(len(inp_str)):
    if i == n:
        continue
    else:
        new_str += inp_str[i]
print("Original string is: ", inp_str, "\nCharacter removed at index: ", n)
print("New string is: ", new_str)
