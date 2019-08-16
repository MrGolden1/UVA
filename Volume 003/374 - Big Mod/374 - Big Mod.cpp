//// python
/*
import sys
import math
import re
from copy import deepcopy

#sys.stdin = open('in.txt','r')
#sys.stdout = open('out.txt','w')

def pow_mod(b , p , m ):
    if p < 3:
        return (b ** p) % m

    d = p // 2

    a = pow_mod(b , d , m) % m

    if p % 2 == 0:
        return (a * a  ) % m
    else:
        return (a * a * b) % m

first = True

while True:
    try:
        if not first:
            _ = input()
        first = False
        b = int(input())
        p = int(input())
        m = int(input())
    except:
        break

    print(pow_mod(b, p,m))

    */