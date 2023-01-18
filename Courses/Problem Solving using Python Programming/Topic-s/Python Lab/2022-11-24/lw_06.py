# 6.	Python Program to Check if a Given String Is Heterogram or Not
# A string is a heterogram if it has no alphabet that occurs more than once. For example, “ChitkaraUniversity” is not a heterogram. However, “abc def ghi jkl” is a heterogram. You can follow the below steps to check if a given string is a heterogram or not.
# •	Separate all the alphabets from other any other characters (using list comprehension)
# •	Convert list of alphabets into set because set has unique elements (using set())
# •	Check if the length of the set is equal to number of alphabets
# •	If yes, then string is heterogram otherwise its not

str = input()
li = str.split()
set1 = set()
li_1 = []
for i in range(len(li)):
    for j in li[i]:
        set1.add(j)
        li_1.append(j)
if len(li_1) == len(set1):
    print('The string', '"', str, '"', 'is a heterogram')
else:
    print('The string', '"', str, '"', 'is not a heterogram')
