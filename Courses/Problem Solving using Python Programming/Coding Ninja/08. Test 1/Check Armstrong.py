# Write a Program to determine if the given number is Armstrong number or not. Print true if number is armstrong, otherwise print false.
# An Armstrong number is a number (with digits n) such that the sum of its digits raised to nth power is equal to the number itself.
# For example,
# 371, as 3^3 + 7^3 + 1^3 = 371
# 1634, as 1^4 + 6^4 + 3^4 + 4^4 = 1634

def check_armstrong(initial_num):
    calculate_armstrong = initial_num
    power = len(str(initial_num))
    the_number = 0
    # print(3,power)
    while calculate_armstrong != 0:
        # print(calculate_armstrong)
        the_number = the_number + ((calculate_armstrong%10)**power)
        # print(the_number)
        calculate_armstrong = (calculate_armstrong//10)
        # print(calculate_armstrong//10)
    if initial_num == the_number:
        return True

initial_num = int(input())
if(check_armstrong(initial_num)):
    print("true")
else:
    print("false")