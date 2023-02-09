def minion_game(string):
    count_stuart = 0
    count_kevin = 0
    for i in range(len(string)):
        length = len(string)
        if string[i] == 'A' or string[i] == 'E' or string[i] == 'I' or string[i] == 'O' or string[i] == 'U':
            add_count_2 = length - i
            count_kevin += add_count_2
        else:
            # print(count_stuart)
            add_count_1 = length - i
            count_stuart += add_count_1
    if count_stuart > count_kevin:
        print("Stuart", count_stuart)
    elif count_kevin > count_stuart:
        print("Kevin", count_kevin)
    else:
        print("Draw")


if __name__ == '__main__':
    s = input()
    minion_game(s)
