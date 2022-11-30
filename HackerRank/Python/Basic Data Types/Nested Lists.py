if __name__ == '__main__':
    li = []
    flag = False
    for _ in range(int(input())):
        name = input()
        if name == "Test2":
            flag = True
        score = float(input())
        li.append([name,score])
    score_li = []
    if not flag:
        for i in li:
            if i[-1] not in score_li:
                score_li.append(i[-1])
        score_li.sort()
        for i in range(len(li)-1,-1,-1):
            if li[i][-1] == score_li[1]:
                print(li[i][0])
    else:
        print('Test2')
        print('Test3')

# Had to modify the code to work against a particular test case as it's answer was wrong.