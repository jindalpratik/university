# 4.	Given a Tuple List, perform sort on basis of total digits in tuple.
# Examples:
# Input : test_list = [(3, 4, 6, 723), (1, 2), (134, 234, 34)]
# Output : [(1, 2), (3, 4, 6, 723), (134, 234, 34)]
# Explanation : 2 < 6 < 8, sorted by increasing total digits.

# Input : test_list = [(1, 2), (134, 234, 34)]
# Output : [(1, 2), (134, 234, 34)]
# Explanation : 2 < 8, sorted by increasing total digits.

test_list = [(3, 4, 6, 723), (1, 2), (134, 234, 34)]
smallest_count = 2*10**23
largest_count = 0
smallest_index = 0
current_index = 0
for i in range(len(test_list)):
    count = 0
    for j in range(len(test_list[i])):
        count += len(test_list[i][j])
    if count < smallest_count:

        smallest_index = i
