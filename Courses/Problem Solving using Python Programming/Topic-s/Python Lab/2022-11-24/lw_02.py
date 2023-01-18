# 2.	Write a Python program to remove an empty tuple(s) from a list of tuples.
# Sample data: [(), (), ('',), ('a', 'b'), ('a', 'b', 'c'), ('d')]
# Expected output: [('',), ('a', 'b'), ('a', 'b', 'c'), 'd']

li = [(), (), ('',), ('a', 'b'), ('a', 'b', 'c'), ('d')]
li_new = []
for i in range(len(li)):
    if li[i] != ():
        li_new.append(li[i])
print(li_new)
