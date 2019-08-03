// python 
/*
import sys
import math
import re
from copy import deepcopy

#sys.stdin = open('in.txt','r')
#sys.stdout = open('out.txt','w')

def forward_check(arr ,n , i ,j):
    h = j + 1
    v = i + 1
    while h < n:
        if arr[i][h] == 'X':
            break
        arr[i][h] = 'B'
        h += 1
    h = j - 1
    while h > -1:
        if arr[i][h] == 'X':
            break
        arr[i][h] = 'B'
        h -= 1

    while v < n:
        if arr[v][j] == 'X':
            break
        arr[v][j] = 'B'
        v += 1
    v = i - 1
    while v > -1:
        if arr[v][j] == 'X':
            break
        arr[v][j] = 'B'
        v -= 1


def max_rook(arr ,n , row , col):
    if row != -1:
        arr[row][col] = 'B'
        forward_check(arr,n,row,col)
    max = 0
    for i in range(n):
        for j in range(n):
            if arr[i][j] != 'B' and arr[i][j] != 'X':
                rook = max_rook(deepcopy(arr) , n , i , j)
                if rook > max :
                    max = rook
    return max + 1

if __name__ == "__main__" :
    while True:
        n = int(input())
        if n == 0:
            break
        rows = []
        for _ in range(n):
            rows.append(input().replace('\n',''))
        arr = [[x for x in row] for row in rows]
        print(max_rook(arr, n , -1, -1) - 1)
        */