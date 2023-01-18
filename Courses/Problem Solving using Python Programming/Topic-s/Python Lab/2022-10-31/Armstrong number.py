def check_armstrong(initial_num):
    calculate_armstrong = initial_num
    power = len(str(initial_num))
    the_number = 0 # abc = a**n + b**n + c**n
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