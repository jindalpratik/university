#Replace all ______ with rjust, ljust or center. 

thickness = int(input()) #This must be an odd number
c = 'H'

#Top Cone
for i in range(thickness):
    print(((c*i).______(thickness-1)+c+(c*i).______(thickness-1)).center(thickness,'-'))

#Top Pillars
for i in range(thickness+1):
    print(((c*thickness).______(thickness*2)).ljust(thickness,'-')+((c*thickness).______(thickness*6)).rjust(thickness,'-'))

#Middle Belt
for i in range((thickness+1)//2):
    print((c*thickness*5).______(thickness*6))    

#Bottom Pillars
for i in range(thickness+1):
    print(((c*thickness).______(thickness*2)).ljust(thickness,'-')+((c*thickness).______(thickness*6)).rjust(thickness,'-'))    

#Bottom Cone
for i in range(thickness):
    print((((c*(thickness-i-1)).______(thickness)+c+(c*(thickness-i-1)).______(thickness)).______(thickness*6)).center(thickness,'-'))