li_n = [x for x in input().split()]
ele = input()
for i in li_n:
    if ele == i:
        print(ele,"exists in the list")
        break
else:
    print("does not exist in list")
