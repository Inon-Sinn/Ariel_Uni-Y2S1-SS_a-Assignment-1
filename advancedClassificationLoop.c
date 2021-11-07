#include "NumClass.h"

int digits(int n);

int Pow(int n,int d);

int isArmstrong(int n){
    int r,sum=0,temp,dts=0;     
    dts = digits(n); 
    temp=n;   
    while(n>0)    
    {    
        r=n%10;    
        sum=sum+Pow(r,dts);
        n=n/10;    
    }       
    if((temp==sum)&&(temp!=0))    
        return 1;       
    return 0;
}

int isPalindrome(int n){
    int r,sum=0,temp;       
    temp=n;    
    while(n>0)    
    {    
        r=n%10;    
        sum=(sum*10)+r;    
        n=n/10;    
    }    
    if(temp==sum)    
        return 1;      
    return 0;  
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