#!/bin/python

n = int(raw_input("Enter size of your array: ").strip())
print "Enter {} single spaced integers".format(n)						
arr = map(int, raw_input().strip().split(' '))
sum = 0
for i in range(n):
	sum += arr[i]
print sum
