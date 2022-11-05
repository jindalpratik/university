# For a given string(str), remove all the consecutive duplicate characters.
# Example:

# Input String: "aaaa"
# Expected Output: "a"

# Input String: "aabbbcc"
# Expected Output: "abc"


from sys import stdin

def removeConsecutiveDuplicates(string) :
	# Your code goes here
    s = string + " "
    for i in range(len(s)-1):
        if s[i] != s[i+1]:
            print(s[i],end="")
	
#main

string = stdin.readline().strip()

ans = removeConsecutiveDuplicates(string)

print(ans)
