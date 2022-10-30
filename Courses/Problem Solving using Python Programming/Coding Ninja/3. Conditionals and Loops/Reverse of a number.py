# v=Write a program to generate the reverse of a given number N. Print the corresponding reverse number.
# Note : If a number has trailing zeros, then its reverse will not include them. For e.g., reverse of 10400 will be 401 instead of 00401.

N = int(input())
rev = 0

while N != 0:
    # print(N)
    rev = rev*10 + (N%10)
    # print(rev)
    N = (N//10)

print(rev)

# N should be devided by 10 only after rev has been calculated othrwise reverse might have a trailing 0 because of getting 0 as an input.