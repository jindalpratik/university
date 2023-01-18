# 6. Write a program that reads a string from the user containing a date in the
# form mm/dd/yyyy. It should print the date in the form March 12, 2021.

li = [int(x) for x in input().split("/")]
dict = {1:"January", 2:"Februrary", 3:"March", 4:"April", 5:"May", 6:"June", 7:"July", 8:"August", 9:"September", 10:"October", 11:"November", 12:"December"}
print(dict[li[0]],li[1],end = ", ")
print(li[2])