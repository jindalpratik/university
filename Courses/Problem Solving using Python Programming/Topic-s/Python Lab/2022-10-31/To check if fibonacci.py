def F(n):
    a = 0
    b = 1
    sum = 1
    while sum <= n:
        a = b
        b = sum
        if sum == n:
            return True
        sum = a + b
    else:
        return False

n = int(input())
if(F(n)):
    print("true")
else:
    print("false")