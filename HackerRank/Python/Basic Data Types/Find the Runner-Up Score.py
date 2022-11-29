if __name__ == '__main__':
    n = int(input())
    arr = map(int, input().split())
    new_li = []
    for i in arr:
        if i not in new_li:
            new_li.append(i)
    new_li.sort()
    print(new_li[-2])