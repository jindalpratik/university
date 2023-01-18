# 7. Write a Python function to get a string made of 4 copies of the last two characters of a specified string (length must be at least 2). 
# Sample function and result :
# insert_end('Python') -> onononon
# insert_end('Exercises') -> eseseses
# Click me to see the sample solution

str = input()
print((str[-2]+str[-1])*4)
