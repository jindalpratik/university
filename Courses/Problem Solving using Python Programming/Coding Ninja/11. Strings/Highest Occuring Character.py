
from sys import stdin


def highestOccuringChar(string) :
    frequency = []
    highest_occurance = 0
    index = 0
    for i in range(256):
        frequency.append(0)
    for x in string:
        frequency[ord(x)] = frequency[ord(x)] + 1
    # print(frequency)
    for y in range(256):
        if frequency[y] > highest_occurance:
            # print(highest_occurance, frequency[y], index)
            highest_occurance = frequency[y]
            index = y
    # print(index)
    # print(highest_occurance)
    # print("emd")
    return chr(index)



#main
string = stdin.readline().strip();
ans = highestOccuringChar(string)
print(ans)