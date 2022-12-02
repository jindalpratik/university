import textwrap

def wrap(string, max_width):
    i = 0
    new_str = ""
    while i < len(string):
        new_str += string[i:i+max_width] + '\n'
        i += max_width
    return new_str

if __name__ == '__main__':
    string, max_width = input(), int(input())
    result = wrap(string, max_width)
    print(result)