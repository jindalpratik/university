def merge_the_tools(string, k):
    start = 0
    end = start + k
    while end <= len(string):
        new_str = ""
        for i in string[start:end]:
            if i not in new_str:
                new_str += i
        print(new_str)
        start += k
        end += k

if __name__ == '__main__':
    string, k = input(), int(input())
    merge_the_tools(string, k)