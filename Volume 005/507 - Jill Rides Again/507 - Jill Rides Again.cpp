////// python
/*
import sys
import math
import re
from copy import deepcopy

#sys.stdin = open('in.txt','r')
#sys.stdout = open('out.txt','w')


def kadane(n , arr):
    max_so_far = 0
    max_here = 0
    start = 0
    end = 0
    new_start = 0
    for i in range(n):
        max_here = max_here + arr[i]
        if max_here < 0:
            max_here = 0
            new_start = i + 1
        elif  max_here == max_so_far and (i - new_start > end - start):
            max_so_far = max_here
            start = new_start
            end = i
        elif max_here > max_so_far:
            max_so_far = max_here
            start = new_start
            end = i      

    return max_so_far , start ,end

r = int(input())

for i in range(r):
    s = int(input())
    arr = []
    for j in range(s -1):
        arr.append(int(input()))

    sum , start , end = kadane(s-1 , arr)

    if sum < 1:
        print('Route {} has no nice parts'.format(i+1))
    else:
        print('The nicest part of route {} is between stops {} and {}'.format(i+1 , start +1 ,end + 2))
    */