def print_formatted(number):
    for i in range(1,n+1):
        print(i, oct(i), hex(i), bin(i))

if __name__ == '__main__':
    n = int(input())
    print_formatted(n)