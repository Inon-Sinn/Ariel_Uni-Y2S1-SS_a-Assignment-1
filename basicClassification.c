#include "NumClass.h"

int isPrime(int n){
    int i,m=n/2;       
    for(i=2;i<=m;i++)    
    {    
        if(n%i==0)      
            return 0;      
    }       
    return 1;  
}

int isStrong(int n){
    int sum=0,k=n,r; 
    while(k!=0){  
        r=k%10;  
        int f=fact(r);  
        k=k/10;  
        sum=sum+f;  
    }  
    if(sum==n)  
        return 1;
    return 0; 
}


int fact(int r){  
    int mul=1;  
    for(int i=1;i<=r;i++)  
    {  
        mul=mul*i;  
    }  
    return mul;  
}