li_s = input().split()
min_len = 2*23
index = 0
for n in range(len(li_s)):
    if min_len > len(li_s[n]):
        min_len = len(li_s[n])
        index = n
print(li_s[index])