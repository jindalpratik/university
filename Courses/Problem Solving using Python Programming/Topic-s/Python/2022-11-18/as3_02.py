# 2. Write a program to multiply two matrices.

arr1 = [[1, 2], [2, 3], [4, 5]]
arr2 = [[1, 2, 3], [2, 3, 4]]
multiply_arr = []
if len(arr1[0]) == len(arr2):
    for i in range(len(arr1)):
        temp_arr = []
        for k in range(len(arr1)):
            temp_num = 0
            f = 0
            for j in range(len(arr1[i])):
                temp_num = temp_num + (arr1[i][j]*arr2[f][k])
                f = f + 1
            temp_arr.append(temp_num)
        multiply_arr.append(temp_arr)
    print("Multiplication for the matrix is:", multiply_arr)
else:
    print("Multiplication can't take place between these arrays")
