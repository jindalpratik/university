# Given a number N, print sum of all even numbers from 1 to N.
n = int(input())
sum = 0
i = 2
while i <= n:
    sum = sum + i
    i = i + 2
print(sum)