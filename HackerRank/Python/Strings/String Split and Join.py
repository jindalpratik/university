def split_and_join(line):
    li_str = line.split(" ")
    return "-".join(li_str)

if __name__ == '__main__':
    line = input()
    result = split_and_join(line)
    print(result)
    