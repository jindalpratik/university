# 1. Tina went to a fruit market to buy some fruits. She filled her fruit basket with different types of fruits all together. But the vendor now asked Tina to separate each type of fruit and count them, so that he can make the bill. Each type of fruit has a particular number written on it. Tina finds it difficult to do so. Help her to count the number of fruits of each type. 
# You have given a list A of size N, which stores the number written on each fruit in the basket. Your task it to count the number of fruits of each type.
n = int(input())
li = []
for i in range(n):
    li.append(int(input()))
for f in range(len(li)):
    count = 1
    if li[f] != "null":
        for i in range(f+1,len(li)):
            if li[f] == li[i]:
                count += 1
                li[i] = "null"
        print(li[f], count)
        li[f] = "null"