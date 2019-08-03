/// python
/*
import sys
import math
import re
from copy import deepcopy

#sys.stdin = open('in.txt','r')
#sys.stdout = open('out.txt','w')

while True:
    try:
        arr = list(map(int , input().split()))
        arr.pop()
        n = len(arr)
        dp = [[0 for j in range(n)] for i in range(n)]
        max = -math.inf

        for i in range(n):
            for j in range(i,n):
                if i == j :
                    dp[i][j] = arr[i]
                else :
                    dp[i][j] = dp[i][j - 1] * arr[j]

                if dp[i][j] > max:
                    max = dp[i][j]
        print(max)
    except:
        break
        */