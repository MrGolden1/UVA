////////// python 
/*
import sys
import math

#sys.stdin = open('in.txt','r')
#sys.stdout = open('out.txt','w')

t = int(input())
for i in range(0,t):
    n = int (input())
    arr = []
    arr = [int(x) for x in input().split()]
    cnt = 0
    for j in range(0,n):
        for k in range(0 , n - j - 1):
            if arr[k] > arr[k+1]:
                cnt += 1
                buf = arr[k]
                arr[k] = arr[k+1]
                arr[k+1] = buf
    print("Optimal train swapping takes {} swaps.".format(cnt))
    */