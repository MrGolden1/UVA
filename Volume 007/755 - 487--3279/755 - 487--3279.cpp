//// python
/*
import sys
import math
import re
from copy import deepcopy

#sys.stdin = open('in.txt','r')
#sys.stdout = open('out.txt','w')

num_map = {
    'A': '2' ,
    'B': '2' ,
    'C': '2' ,
    'D': '3' ,
    'E': '3' ,
    'F': '3' ,
    'G': '4' ,
    'H': '4' ,
    'I': '4' ,
    'J': '5' ,
    'K': '5' ,
    'L': '5' ,
    'M': '6' ,
    'N': '6' ,
    'O': '6' ,
    'P': '7' ,
    'R': '7' ,
    'S': '7' ,
    'T': '8' ,
    'U': '8' ,
    'V': '8' ,
    'W': '9' ,
    'X': '9' ,
    'Y': '9' ,
    '0' :'0' ,
    '1' :'1' ,
    '2' :'2' ,
    '3' :'3' ,
    '4' :'4' ,
    '5' :'5' ,
    '6' :'6' ,
    '7' :'7' ,
    '8' :'8' ,
    '9' :'9' ,
    }

t = int(input())
for a in range(t):
    input()
    n = int(input())
    nums = []
    res = dict()
    for b in range(n):
        nums.append(input().replace('-','').replace(' ' ,''))
    for num in nums:
        num = ''.join([(num_map[i]) for i in num] )
        if num in res.keys():
            res[num] += 1
        else :
            res[num]  = 1
    flag = True
    for i in sorted(res.keys()) :
        if res[i] > 1:
            flag = False
            print('{}-{} {}'.format(i[:3] , i[3:] , str(res[i])))
    if flag ==True:
        print('No duplicates.')
    if a != t -1 :
        print()
    */
