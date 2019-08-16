//// python 
/*
import math
import sys

# sys.stdin  = open('in.txt','r')
# sys.stdout = open('out.txt' ,'w')

n = 0
while True:
    try:
        entry = input()
    except:
        break

    buf = list(map(int , entry.split()))
    if len(buf) == 1:
        n = buf[0]
        arr = list(map(int,input().split()))
        correct = [arr.index(i + 1) for i in range(n) ]
        #print('correct : {}'.format(correct))
        continue
    
    #print('buf : {}'.format(buf))
    case = [buf.index(i + 1) for i in range(n)]
    #print('case : {}'.format(case))

    dp =  [[0 for i in range(n + 1)] for j in range(n + 1)]

    for i in range(1 , n + 1):
        for j in range(1 , n + 1):
            if correct[i - 1] == case[j - 1] :
                dp[i][j] = dp[i - 1] [j - 1] + 1
            else :
                dp[i][j] = max(dp[i - 1][j] , dp[i][j - 1])

    print(dp[n][n])
    */
    