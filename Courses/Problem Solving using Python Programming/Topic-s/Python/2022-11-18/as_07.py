# 7. Write a Python program to find the first appearance of the substring 'not' and 'poor' from a given string, if 'not' follows the 'poor', replace the whole 'not'...'poor' substring with 'good'. Return the resulting string.
# Sample String : 'The lyrics is not that poor!'
# 'The lyrics is poor!'
# Expected Result : 'The lyrics is good!'
# 'The lyrics is poor!'

inp_str = input()
str_li = inp_str.split()
if "not" in inp_str and "poor" in inp_str:
    print("Here")
    index1 = 0
    index2 = 0
    for i in range(len(str_li)):
        if str_li[i] == "not":
            index1 = i
        if str_li[i] == "poor":
            index2 = i
    if index1 < index2:
        for i in range(0, index1):
            print(str_li[i], end=" ")
        print("good", end="")
    else:
        print(inp_str)
else:
    print(inp_str)
