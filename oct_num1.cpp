#include "middle.h"

long long itc_oct_num(long long num1){
    int obr=1;
    while (num1!=0){
        obr=(obr+(num1%8))*10;
        num1=num1/8;
    }
    num1=0;
    while (obr!=0){
        num1=num1*10+obr%10;
        obr=obr/10;
    }num1-=1;
    return num1;
}
