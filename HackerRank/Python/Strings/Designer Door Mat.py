li = [int(x) for x in input().split()]

for i in range(1,li[0]+1):
    if i < (li[0]+1)//2:
        # print initial '-'
        dash = "-"
        print(dash*(((li[1]-(3))//2)-3*(i-1)), end="")
        # print middle pattern '.|.'
        pat = ".|."
        print(pat*((i*2)-1),end="")
        #print ending '-'
        dash = "-"
        print(dash*(((li[1]-(3))//2)-3*(i-1)))
    elif i == (li[0]+1)//2:
        # print initial '-'
        dash = "-"
        print(dash*(((li[1]-(7))//2)), end="")
        # print welcome
        print("WELCOME",end="")
        # print initial '-'
        dash = "-"
        print(dash*(((li[1]-(7))//2)))
    if i > (li[0]+1)//2:
        # print initial '-'
        dash = "-"
        print(dash*(((li[1]-(3))//2)-3*((li[0]-i))), end="")
        # print middle pattern '.|.'
        pat = ".|."
        print(pat*(((li[0]-i+1)*2-1)),end="")
        #print ending '-'
        dash = "-"
        print(dash*(((li[1]-(3))//2)-3*((li[0]-i))))