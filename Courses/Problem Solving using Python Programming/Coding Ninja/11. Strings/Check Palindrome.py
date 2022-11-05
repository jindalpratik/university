# Given a string, determine if it is a palindrome, considering only alphanumeric characters.



from sys import stdin


def isPalindrome(string) :
    str = ""
    for i in string[-1::-1]:
        str = str + i
    if str == string:
        return True
    else:
        return False



#main
string = stdin.readline().strip();
ans = isPalindrome(string)

if ans :
    print('true')
else :
    print('false')