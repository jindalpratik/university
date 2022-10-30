# Electricity bill
n = int(input())
if n == 0 or n <= 100:
    print("Amount to pay:", 0)
elif n >100 and n<= 200:
    charge = (n - 100)*5
    print("Amount to pay:", charge)
elif n>200:
    charge = 500 + ((n-200)*10)
    print("Amount to pay:", charge)

