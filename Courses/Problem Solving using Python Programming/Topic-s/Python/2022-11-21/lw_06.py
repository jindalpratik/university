# 6. Write a Python function to insert a string in the middle of a string.
# Sample function and result :
# insert_sting_middle('[[]]<<>>', 'Python') -> [[Python]]
# insert_sting_middle('{{}}', 'PHP') -> {{PHP}}

def insert_string_middle(a, b):
    print(a[:len(a)//2], end='')
    print(b, end="")
    print(a[len(a)//2:], end='')


insert_string_middle(input(), input())
