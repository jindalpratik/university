# 9. Write a Python function to reverses a string if it's length is a multiple of 4.

def reverse_4(a):
    if len(a) % 4 == 0:
        for i in range(len(a)-1, -1, -1):
            print(a[i], end="")
    else:
        print(a)


reverse_4(input())
