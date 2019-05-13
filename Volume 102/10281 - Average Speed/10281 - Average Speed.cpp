#include <iostream>
#include "string"
#include "math.h"
#include "sstream"
#include <stdio.h>
using namespace std;
int size(string str);
int charToInt (char _char);
int strToInt (string _str, int _beginning, int _end);
float get_time(string str);
double get_v(string str);
int main()
{
     double time=0 , v=0 , d=0 , j=0 ;
     string str ;
    
     while(getline(cin,str))
     {
     if ( size(str) > 8)
     {
     d = d +((get_time(str)-time)* v) ;
     time = get_time(str);
     v =  get_v(str);
     }
     else {
         //cout.precision(2);
         //cout << str << " " << fixed << ((get_time(str)-time)*v)+d << " km" << endl ;
         cout << str << " ";
         printf("%.2lf km\n", ((get_time(str) - time)*v) + d);
     }
     }
     return 0 ;
}

float get_time(string str)
{
    float sum = 0;
     float a =strToInt(str , 0 , 1);
     sum = sum + ( a*3600) ;
        a =strToInt(str , 3 , 4);
     sum = sum +( a*60) ;
        a =strToInt(str , 6 , 7);
     sum = sum + a ; 
     return sum/3600 ;
}
double get_v(string str)
{
    return strToInt(str , 10 , size(str)-1 );
}
int size(string str)
{
    int i=0 ;
    while (str[i])
    {
        i++;
    }
    return i;
}
int strToInt (string _str, int _beginning, int _end)
{
    int temp, num = 0;
    for (int i = _beginning; i <= _end; i++)
        {
            temp = charToInt(_str[i]);
            for (int x = 0; x < _end - i; x++)
            {
                temp *= 10;
            }
            num += temp;
        }
    return num;
}
int charToInt (char _char)
{
    for (int i = 48, num = 0; i < 58; i++, num++)
    if ((int)_char == i)

        return num;
}
    
 //////////////// pyhton
 /*
 import sys
import math

#sys.stdin = open('in.txt','r')
#sys.stdout = open('out.txt','w')

distance = 0 
lastSpeed = 0
lastTime = 0

if __name__ == "__main__":
    for line in sys.stdin:
        line = line.replace('\n','')
        li = line.split()
        if len(li) == 1 :
            hour , min , sec = map(float ,li[0].split(':'))
            t = hour + ( min  / 60 ) + (sec / 3600)
            print(line + ' ' , end ='')
            print("%.2f"%( (t - lastTime ) * lastSpeed + distance) + " km" )
        else:
            hour , min , sec = map(float ,li[0].split(':'))
            t = hour + ( min  / 60 ) + (sec / 3600)
            distance += (t - lastTime ) * lastSpeed
            lastTime = t
            lastSpeed = int (li[1])
            */