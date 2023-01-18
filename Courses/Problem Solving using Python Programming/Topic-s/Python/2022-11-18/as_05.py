# 5. Write a Python program to get a single string from two given strings, separated by a space and swap the first two characters of each string. 
# Sample String : 'abc', 'xyz'
# Expected Result : 'xyc abz'

inp_li = input().split()
new_str = ""
for i in range(len(inp_li)):
    for f in range(len(inp_li[i])):
        if f == 0 or f == 1:
            if i == 0:
                new_str = new_str + inp_li[1][f]
            elif i == 1:
                new_str = new_str + inp_li[0][f]
        else:
            new_str += inp_li[i][f]
    new_str += " "
print(new_str)
