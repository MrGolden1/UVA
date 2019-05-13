///////// python 
/*
import sys
import math

#sys.stdin = open('in.txt','r')
#sys.stdout = open('out.txt','w')

def function(arr , i , j ):
    mine = arr[i - 1 ][j - 1] + arr[i][ j - 1] + arr[i + 1][ j - 1] + arr[i + 1][j] + arr[i - 1][j] + arr[i + 1][j + 1] + arr[i][j + 1] + arr[i - 1][j + 1]
    return int(mine)

t = 1
first = True
while True:
    m , n = [int(x) for x in input().split()]
    if n == 0 | m == 0:
        break;
    if first == False:
        print('')
    first = False
    a = m * [ n * []]
    for i in range(0,m):
        a[i] = [ch for ch in input()]
    for i in range(0,m):
        for j in range(0,n):
            if a[i][j] == '.':
                a[i][j] = 0
            else :
                a[i][j] = 1
    for i in range(0,m):
        a[i].insert(0,0)
        a[i].append(0)
    a.insert(0 ,(n + 2) * [0])
    a.append((n+ 2) * [0])
    res = [ [0 for x in range(0,n)] for x in range(0,m)]
    for i in range(1,m + 1):
        for j in range(1,n + 1):
            if a[i][j] == 1:
                res[i - 1][j - 1] = '*'
            else :
                res[i - 1][j - 1] = function(a,i,j)
    print('Field #{}:'.format(t))
    for i in res:
        for j in i:
            print(j,end='')
        print('')
    t += 1
    */