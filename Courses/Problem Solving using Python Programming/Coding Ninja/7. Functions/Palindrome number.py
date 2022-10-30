# Write a program to determine if given number is palindrome or not. Print true if it is palindrome, false otherwise.
# Palindrome are the numbers for which reverse is exactly same as the original one. For eg. 121

def checkPalindrome(num):
    original_num = num
    rev = 0
    while original_num != 0:
        # print(original_num)
        rev = rev*10 + (original_num % 10)
        # print(rev)
        original_num = (original_num//10)
    # print(rev)
    # print(num)
    if rev == num:
        return True
    else:
        return False

num = int(input())
# print(checkPalindrome(num))
isPalindrome = checkPalindrome(num)
if (isPalindrome):
	print('true')
else:
	print('false')
