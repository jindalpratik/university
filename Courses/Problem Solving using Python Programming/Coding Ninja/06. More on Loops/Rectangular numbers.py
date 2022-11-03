#Print the following pattern for the given number of rows.
#Pattern for N = 4
#4444444
#4333334
#4322234
#4321234
#4322234
#4333334  
#4444444

N = int(input())
j = 1
for i in range(1, N + 1):
    n = j
    # print("\t", n)
    q = N
    a = i
    while n > 1:
        print(q, end = "")
        q = q - 1
        n = n - 1
    while a <= N:
        print(N - i + 1, end = (""))
        a = a + 1
    while a > i + 1:
        print(N - i + 1, end = (""))
        a = a - 1
    q = q + 1
    while n < j:
        print(q, end = "")
        q = q + 1
        n = n + 1
    j = j + 1
    # print("\t",j)
    print()
j = 1
for i in range(N - 1, 0, -1):
    n = 1
    # print("\t", n)
    q = N
    a = 1
    while n < i:
        print(q, end = "")
        q = q - 1
        n = n + 1
    while a <= j + 1:
        print(N - i + 1, end = (""))
        a = a + 1
    while a > 2:
        print(N - i + 1, end = (""))
        a = a - 1
    q = q + 1
    while n > 1:
        print(q, end = "")
        q = q + 1
        n = n - 1
    j = j + 1
    # print("\t",j)
    print()
        

    
    
