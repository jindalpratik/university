# 9. Write a program that display following output:
# SHIFT
# HIFTS
# IFTSH
# FTSHI
# TSHIF
# SHIFT

def shift(cur_str):
    run_str = cur_str[1:len(cur_str)]
    run_str = run_str + cur_str[0]
    return run_str


inp_str = input()
cur_str = inp_str
print(cur_str)
for i in range(len(inp_str)):
    cur_str = shift(cur_str)
    print(cur_str)
