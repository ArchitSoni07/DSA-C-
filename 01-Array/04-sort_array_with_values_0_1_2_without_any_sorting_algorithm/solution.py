from typing import final


arr = [0, 1, 2, 0, 2, 1, 2, 0]
lengthArr = len(arr)

finalArr = []
arr1 = []
arr2 = []
arr3 = []

for i in arr:
    if i == 0:
        arr1.append(i)
    if i == 1:
        arr2.append(i)
    if i == 2:
        arr3.append(i)

finalArr = arr1 + arr2 + arr3
print(finalArr)
