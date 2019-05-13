///////// python
/*
import sys
import math

#sys.stdin = open('in.txt','r')
#sys.stdout = open('out.txt','w')

def reverse(n):
    res = 0 
    while n != 0:
        res = res * 10 + n % 10
        n = int(n/10)
    return res

t = int (input())
for i in range(0,t):
    n = int(input())
    cnt = 0 
    result = n
    first = True
    while result != reverse(result) or first == True:
        first =False
        result = result + reverse(result)
        cnt += 1
    print(cnt , end = '')
    print(' ' , end = '')
    print(result)
    */