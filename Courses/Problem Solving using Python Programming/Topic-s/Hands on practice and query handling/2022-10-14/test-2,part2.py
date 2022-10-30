N = int(input())
last = N
rev = 0

while N != 0:
    # print(N)
    rev = rev*10 + (N%10)
    # print(rev)
    N = (N//10)

if last == rev:
    print("Transaction may proceed")
else:
    print("Transaction declined")
