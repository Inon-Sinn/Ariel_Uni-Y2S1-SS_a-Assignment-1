#include <stdio.h>
#include "NumClass.h"

int isPrime(int n);

int isArmstrong(int n){
    return 0;
}

int isPalindrome(int n){
    return 0;
}

int isStrong(int n);

int fact(int r);



int main(){ 
    
    
    int start=0,end=0;
    printf("please enter 2 numbers \n");
    scanf("%d%d",&start, &end);
    //Armstrong numbers
    printf("The Armstrong numbers are:");
    for(start;start<=end;start++){
        if(isStrong(start))
            printf(" %d",start);
    }
    printf("\n");
    //Palindromes 
    printf("The Palindromes are:");
    for(start;start<=end;start++){
        if(isPalindrome(start))
            printf(" %d",start);
    }
    printf("\n");
    //Prime Numbers
    printf("The Prime numbers are:");
    for(start;start<=end;start++){
        if(isStrong(start))
            printf(" %d",start);
    }
    printf("\n");
    //Strong Numbers
    printf("The Strong numbers are:");
    for(start;start<=end;start++){
        if(isStrong(start))
            printf(" %d",start);
    }
    printf("\n");
    return 0;

}


int isStrong(int n){
    int x; 
    int sum=0;  
    printf("Enter a number");  
    scanf("%d",&x);  
    int k=x;  
    int r;  
    while(k!=0)  
    {  
        r=k%10;  
        int f=fact(r);  
        k=k/10;  
        sum=sum+f;  
    }  
    if(sum==x)  
    {  
        printf("\nNumber is a strong");  
    }  
    else  
    {  
        printf("\nNumber is not a strong");  
    }  
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













