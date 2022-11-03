# Given a number N, figure out if it is a member of fibonacci series or not. Return true if the number is member of fibonacci series else false.
# Fibonacci Series is defined by the recurrence
#     F(n) = F(n-1) + F(n-2)
# where F(0) = 0 and F(1) = 1
def F(n):
    a = 0
    b = 1
    sum = 1
    while sum <= n:
        a = b
        b = sum
        if sum == n:
            return True
            break
        sum = a + b
    else:
        return False

n = int(input())
if(F(n)):
    print("true")
else:
    print("false")