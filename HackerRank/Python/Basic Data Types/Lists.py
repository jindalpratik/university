if __name__ == '__main__':
    N = int(input())
    arr = []
    for i in range(N):
        inp = input().split()
        if 'insert' in inp:
            arr.insert(int(inp[-2]), int(inp[-1]))
        elif 'print' in inp:
            print(arr)
        elif 'remove' in inp:
            arr.remove(int(inp[-1]))
        elif 'append' in inp:
            arr.append(int(inp[-1]))
        elif 'sort' in inp:
            arr.sort()    
        elif 'pop' in inp:
            arr.pop(-1)      
        elif 'reverse' in inp:
            arr.reverse()     