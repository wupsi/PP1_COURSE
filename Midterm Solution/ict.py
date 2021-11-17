size = input()
pep = input()
extra = input()
price = 0
if 'S' in size: price += 15
elif 'M' in size: price += 20
elif 'L' in size: price += 25

if pep == 'Y':
    if price == 15: price += 2
    else: price += 3

if extra == 'Y': price += 1
print(price)