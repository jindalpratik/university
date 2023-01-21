def print_formatted(number):
    nspaces = len(str(bin(number))) - 1
    # print(nspaces, len(str(bin(number))))
    for i in range(1,n+1):
        decimal = str(i)
        # print(nspaces-len(decimal))
        octal = str(oct(i))[2:]
        # print(octal)
        hexadecimal = str(hex(i))[2:]
        # print(hexadecimal)
        binary = str(bin(i))[2:]
        # print(binary)
        string = " "*(nspaces-len(decimal) - 1) + decimal + " "*(nspaces-len(octal)) + octal + " "*(nspaces-len(hexadecimal)) + hexadecimal + " "*(nspaces-len(binary)) + binary
        print(string)


if __name__ == '__main__':
    n = int(input())
    print_formatted(n)
    
# isn't accepting the answer