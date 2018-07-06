import sys
#enter the array's elements
array = map(int,raw_input().strip().split(' '))
sum = 0
#using a loop
for i in array:
    sum += i
print sum
