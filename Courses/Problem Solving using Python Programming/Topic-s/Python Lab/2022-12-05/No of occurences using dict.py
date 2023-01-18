input = [1,1,1,1,1,2,2,2,3,5,5,5,4,5,6,5,1,5,2,5,1,1,85,8,74,55]
input.sort()
dict = {}
for i in input:
    dict[i] = dict.get(i, 0) + 1
print(dict)
for j in  dict:
    print(j,":",dict[j])