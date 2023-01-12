def first_last_values():
	li = []
	for i in range(1,31):
		li.append(i**2)
	print(li[:5])
	print(li[-5:])

first_last_values()