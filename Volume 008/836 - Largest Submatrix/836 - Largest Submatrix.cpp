//////// python
/*
import sys
import math
import re
from copy import deepcopy

#sys.stdin = open('in.txt','r')
#sys.stdout = open('out.txt','w')

def kadane(arr):
    max_so_far = 0
    max_here = 0
    for i in range(len(arr)):

        max_here += arr[i]
        if max_here < 0:
            max_here = 0
        elif max_here > max_so_far:
            max_so_far = max_here

    return max_so_far

t = int(input())
input()
for _ in range(t):
    arr = []
    while True:
        try:
            line = input()
        except:
            break
        if line == '':
            break
        arr.append([int(i) if i == '1' else -30 for i in line])

    max = 0
    for left in range(len(arr)):
        temp = [0 for i in range(len(arr))]
        for right in range(left  , len(arr)):
            for i in range(len(arr)):
                temp[i] += arr[i][right]

            sum = kadane(temp)
            if sum > max:
                max = sum

    print(max)
    if _ != t - 1:
        print()
    */