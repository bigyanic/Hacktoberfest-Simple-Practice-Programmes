list = [8, 16, 5, 2, 1, 9, 13]

for step in range(1, len(list)):
    item = list[step]
    shift = step - 1;
    while shift >= 0 and item < list[shift]:
        list[shift + 1] = list[shift]
        shift -= 1

    list[shift + 1] = item

for item in list:
    print item
