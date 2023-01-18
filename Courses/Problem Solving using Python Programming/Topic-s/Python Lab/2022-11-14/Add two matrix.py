arr1 = [[1,2],[2,3]]
arr2 = [[2,3],[3,4]]
sum_arr = [[0,0],[0,0]]
for i in range(len(arr1)):
    # temp_arr = []
    for j in range(len(arr2)):
        sum_arr[i][j] = (arr1[i][j] + arr2[i][j])
print("Sum of the two matrix is:",sum_arr)