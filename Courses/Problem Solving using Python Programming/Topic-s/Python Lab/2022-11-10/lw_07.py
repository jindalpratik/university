# 7. Write a program with a function that accepts a string from keyboard and
# create a new string after converting character of each word capitalized. For
# instance, if the sentence is &quot;stop and smell the roses.&quot; the output should be &quot;Stop
# And Smell The Roses"

li = input().split()
for i in range(len(li)):
    for f in range(len(li[i])):
        if f == 0:
            print(chr(ord(li[i][f])-32),end = "")
        else:
            print(li[i][f], end = "")
    print(" ",end = "")