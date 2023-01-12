def check_common(li_1,li_2):
    for i in range(len(li_1)):
        for f in range(len(li_2)):
            if li_1[i] == li_2[f]:
                return True
    return False

# Checking if the above functions works or not.
li_1 = input().split()
li_2 = input().split()
i = check_common(li_1,li_2)
if i:
    print("true")
else:
    print("false")