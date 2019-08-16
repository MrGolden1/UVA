// python
/*
import sys
import math
import re

#sys.stdin = open('in.txt','r')
#sys.stdout = open('out.txt','w')



def kadane(arr , n):
    newstart = 0
    start = -1
    end = -1
    max_so_far = -math.inf
    max_ending_here = 0
    for i in range(0,n):
        max_ending_here = max_ending_here + arr[i]
        if max_ending_here < 0:
            max_ending_here = 0
            newstart = i + 1
        elif max_ending_here > max_so_far:
            max_so_far = max_ending_here
            end = i
            start = newstart
    if end != -1:
        return max_so_far , start , end

    max_so_far = arr[0]
    start = end = 0
    for i in range(0,n):
        if arr[i] > max_so_far:
            max_max_so_far = arr[i]
            start = end = i
    return max_so_far , start , end 




nums = ''

for line in sys.stdin:
    nums += line

nums = re.findall(r'-*\d+' ,nums)

while len(nums) != 0:
    n = int(nums[0])
    matrix = [[0 for _ in range(n) ] for _ in range(n)]
    cnt = 1
    for i in range(0,n):
        for j in range(0,n):
            matrix[i][j] = int(nums[cnt])
            cnt += 1

    maxsum = -math.inf
    for left in range(0,n):
        temp = [0] * n
        for right in range(left,n):
            for i in range(0,n):
                temp[i]  += matrix[i][right]

            sum ,_ ,_ = kadane(temp ,n)
            if sum > maxsum:
                maxsum = sum
    print(maxsum)
    del nums[0:(n**2)+1]
    */