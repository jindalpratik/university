# Given three values - Start Fahrenheit Value (S), End Fahrenheit value (E) and Step Size (W), you need to convert all Fahrenheit values from Start to End at the gap of W, into their corresponding Celsius values and print the table.

def temp_conversion(S, E, W):
    while S <= E :
        # print(S)
        # print(E)
        celcius = int((S-32)*5/9)
        # print(celcius)
        print(S,celcius)
        S = S + W

S = int(input())
E = int(input())
W = int(input())

temp_conversion(S, E, W)