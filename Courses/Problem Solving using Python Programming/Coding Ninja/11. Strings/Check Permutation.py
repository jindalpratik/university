# For a given two strings, 'str1' and 'str2', check whether they are a permutation of each other or not.
# Permutations of each other

# Two strings are said to be a permutation of each other when either of the string's characters can be rearranged so that it becomes identical to the other one.

# Example: 
# str1= "sinrtg" 
# str2 = "string"

# The character of the first string(str1) can be rearranged to form str2 and hence we can say that the given strings are a permutation of each other.

from sys import stdin

def isPermutation(string1, string2) :
    frequency = []
    for i in range(256):
        frequency.append(0)
    for i in string1:
        frequency[ord(i)] = frequency[ord(i)] + 1
    for i in string2:
        frequency[ord(i)] = frequency[ord(i)] - 1
    for i in frequency:
        if i != 0:
            return False
    return True


#main
string1 = stdin.readline().strip();
string2 = stdin.readline().strip();

ans = isPermutation(string1, string2)

if ans :
    print('true')
else :
    print('false')