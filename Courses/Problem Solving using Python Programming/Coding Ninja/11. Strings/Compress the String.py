from sys import stdin,setrecursionlimit
setrecursionlimit(10**7)


def getCompressedString(input) :
	# Write your code here.
    s = string + " "
    count = 1
    for i in range(len(s)-1):
        if s[i] == s[i+1]:
            count = count + 1
        elif s[i] != s[i+1]:
            print(s[i],end="")
            if count > 1:
                print(count, end = "")
            count = 1


# Main.
string = stdin.readline().strip();
getCompressedString(string)
