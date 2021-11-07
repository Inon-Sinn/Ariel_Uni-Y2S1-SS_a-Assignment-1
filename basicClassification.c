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
    return 0;
}