#include "NumClass.h"

int digits(int n);

int Pow(int n,int d);

int ArmstrongRec(int n,int dts);

int reverse(int n);


int isArmstrong(int n){
    int temp = n;
    int dts = digits(n);
    int ArmRec = ArmstrongRec(n,dts);
    if((temp==ArmRec)&&(temp!=0))    
        return 1;       
    return 0;
}

int ArmstrongRec(int n,int dts){
    if(n==0)
        return 0;
    int r = n%10;
    int sumNow = Pow(r,dts);
    n = n/10;
    return sumNow + ArmstrongRec(n,dts);
}

int isPalindrome(int n){
    int temp = n,rev = reverse(temp);
    if(n == rev)
        return 1;
    return 0;
}


int reverse(int n){
    if(n==0)
        return 0;
    int dts = digits(n),sum = n%10,i=0;
    for(i=1;i<dts;i++){
        sum = sum*10;
    }
    n = n/10;
    return sum+reverse(n);
}

int digits(int n){
    int digits = 0;
    while(n>0){
        n=n/10;
        digits++;
    }
    return digits;
}

int Pow(int n,int d){
    int ans = 1;
    int i;
    for(i=0;i<d;i++){
        ans = ans*n;
    }
    return ans;
}