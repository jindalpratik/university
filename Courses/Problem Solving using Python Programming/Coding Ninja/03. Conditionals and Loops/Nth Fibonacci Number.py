#Nth term of Fibonacci series F(n), where F(n) is a function, is calculated using the following formula -
#   ```
#    F(n) = F(n-1) + F(n-2), 
#    Where, F(1) =  1, 
#           F(2) = 1
#    ```
#Provided N you have to find out the Nth Fibonacci Number.

def F(n):
    i = 2
    a = 1
    b = 1
    sum = 0
    if n <= 2:
        return 1
    while i < n:
        sum = a + b
        a = b
        b = sum
        i = i + 1
    return sum

n = int(input())
nth_term = F(n)
print(nth_term)
