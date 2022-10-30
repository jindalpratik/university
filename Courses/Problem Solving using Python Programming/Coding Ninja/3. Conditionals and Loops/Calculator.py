# Write a program that performs the tasks of a simple calculator. The program should first take an integer as input and then based on that integer perform the task as given below.
# 1. If the input is 1, then 2 integers are taken from the user and their sum is printed.
# 2. If the input is 2, then 2 integers are taken from the user and their difference(1st number - 2nd number) is printed.
# 3. If the input is 3, then 2 integers are taken from the user and their product is printed.
# 4. If the input is 4, then 2 integers are taken from the user and the quotient obtained (on dividing 1st number by 2nd number) is printed.
# 5. If the input is 5, then 2 integers are taken from the user and their remainder(1st number mod 2nd number) is printed.
# 6. If the input is 6, then the program exits.
# 7. For any other input, then print "Invalid Operation".
# Note: Each answer in next line.

user_input = int(input())

while user_input != 6:
    if user_input == 1:
        a = int(input())
        b = int(input())
        print(a + b)
    elif user_input == 2:
        a = int(input())
        b = int(input())
        print(a - b)
    elif user_input == 3:
        a = int(input())
        b = int(input())
        print(a * b)
    elif user_input == 4:
        a = int(input())
        b = int(input())
        print( a//b )
    elif user_input == 5:
        a = int(input())
        b = int(input())
        print(a % b)
    else:
        print("Invalid Operation")
    user_input = int(input())

# Remember to only stop the code if it says to stop the code as here that would only 6, 7 and such will only give invalid input and not stop the code.
# Am not able to define a function for reducing the nuber of lines for input.