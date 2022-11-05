
from sys import stdin


def removeAllOccurrencesOfChar(string, ch) :
    s = string + " "
    new_chr = ""
    for i in range(len(s)-1):
        if s[i] != ch:
            new_chr = new_chr + s[i]
    return new_chr
	

#main
string = stdin.readline().strip()
ch = stdin.readline().strip()[0]
ans = removeAllOccurrencesOfChar(string, ch)
print(ans)