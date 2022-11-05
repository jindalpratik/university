# Aadil has been provided with a sentence in the form of a string as a function parameter. The task is to implement a function so as to print the sentence such that each word in the sentence is reversed.


from sys import stdin

def reverseEachWord(string) :
    li_n = string.split()
    # print(li_n)
    out_str = ""
    for ele in li_n:
        # print(ele)
        for n in range(len(ele)-1,-1,-1):
            out_str = out_str + ele[n]
        out_str = out_str + " "
    return out_str


#main
string = stdin.readline().strip()
ans = reverseEachWord(string)
print(ans)