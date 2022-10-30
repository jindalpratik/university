# Print the following pattern for n number of rows.
# Note: each line consist of equal number of characters + spaces. Suppose you are printing xth line for N=n. You need to print 1..x followed by (n-x) spaces, again (n-x) spaces followed by x..1
# For eg. N = 5 
#1        1 
#12      21 
#123    321 
#1234  4321 
#1234554321

N = int(input())
i = 1
while i <= N:
    j = 1
    p = N
    q = i
    while j <= i:
        print(j, end = "")
        j = j + 1
        p = p - 1
    spaces = N - i
    while spaces > 0:
        print(" ", end = "")
        spaces = spaces - 1
    while spaces < p:
        print(" ", end = "")
        spaces = spaces + 1
    j = 1
    while j <= i:
        print(q, end = "")
        j = j + 1
        q = q - 1    
    print()
    i = i + 1