# 5. Write a Python function to create the HTML string with tags around the word(s).
# Sample function and result :
# add_tags('i', 'Python') -> '<i>Python</i>'
# add_tags('b', 'Python Tutorial') -> '<b>Python Tutorial </b>'

def add_tags(a, b):
    print("<{0}>{1}</{0}>".format(a, b))


add_tags(input(), input())
