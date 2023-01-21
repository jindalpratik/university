def swap_case(s):
    new_str = ""
    for i in range(len(s)):
        if ord(s[i]) > 96 and  ord(s[i]) < 123:
            new_str += chr(ord(s[i])-32)
        elif ord(s[i]) > (96-32) and  ord(s[i]) < (123-32):
            new_str += chr(ord(s[i])+32)
        else:
            new_str += s[i]
    return new_str

if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)