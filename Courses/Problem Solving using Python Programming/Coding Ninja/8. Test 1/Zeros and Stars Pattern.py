# Print the following pattern
# Pattern for N = 4
# *000*000*
# 0*00*00*0
# 00*0*0*00
# 000***000

N = int(input())
i = 1
while i <= N:
    j = 2
    while j <= i:
        print(0, end = "")
        j = j + 1
    print('*',end = "")
    j = i + 1
    while j <= N:
        print(0, end = "")
        j = j + 1
    print('*',end = "")
    j = i + 1
    while j <= N:
        print(0, end = "")
        j = j + 1
    print('*',end = "")
    j = 2
    while j <= i:
        print(0, end = "")
        j = j + 1
    print()
    i = i + 1

