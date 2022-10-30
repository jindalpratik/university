# Write a program to input an integer N and print the sum of all its even digits and sum of all its odd digits separately.
# Digits mean numbers, not the places! That is, if the given integer is "13245", even digits are 2 & 4 and odd digits are 1, 3 & 5.

def sum_of_even(N):
    sum = 0
    while N != 0:
        digit = N%10
        N = N//10
        if (digit%2) == 0:
            sum = sum + digit
    str_sum = str(sum)
    return str_sum

def sum_of_odd(N):
    sum = 0
    while N != 0:
        digit = N%10
        N = N//10
        if (digit%2) != 0:
            sum = sum + digit
    str_sum = str(sum)
    return str_sum

N = int(input())

output = sum_of_even(N) + ' ' + sum_of_odd(N)
print(output)