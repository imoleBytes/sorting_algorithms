#!/usr/bin/python3

array = [19, 48, 99, 71, 13, 52, 96, 73, 86, 7]



def quicksort(arr, left, right):
	if left >= right:
		return
	p = partition(arr, left, right)
	quicksort(arr, left, p - 1)
	quicksort(arr, p + 1, right)

def partition(arr, left, right):
	i = left - 1
	p = right
	for j in range(left, right):
		if arr[j] < arr[p]:
			i += 1
			temp = arr[i]
			arr[i] = arr[j]
			arr[j] = temp
	temp = arr[i + 1]
	arr[i + 1] = arr[p]
	arr[p] = temp
	return i + 1




print(array)

print("-----")

quicksort(array, 0, len(array) - 1)

print(array)