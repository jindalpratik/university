# 3. You are in-charge of the cake for your niece's birthday and have decided the cake will have one candle for each year of her total age. When she blows out the candles, she’ll only be able to blow out the tallest ones.
# For example, if your niece is turning 5 years old, and the cake will have candles of height 4,2,4,3,4 she will be able to blow out 3 candles successfully, since the tallest candle is of height 4 and there are 3 such candles.
# Given the height of each individual candle, find and print the number of candles she can successfully blow out.

age = int(input())
li = []
for i in range(age):
    li.append(int(input()))
num = 0
for i in range(li):
    if li[i] == age-1:
        num += 1
print(num)