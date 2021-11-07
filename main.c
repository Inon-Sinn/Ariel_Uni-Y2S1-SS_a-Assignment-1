#include <stdio.h>
#include "NumClass.h"

int isPrime(int n){
    return 0;
}

int isArmstrong(int n){
    return 0;
}

int isPalindrome(int n);

int isStrong(int n){
    return 0;
}

int main(){ 
    
    
    int start=0,end=0,tempS;
    printf("please enter 2 numbers \n");
    scanf("%d%d",&start, &end);
    //Armstrong numbers
    printf("The Armstrong numbers are:");
    for(tempS = start;tempS<=end;tempS++){
        if(isArmstrong(tempS))
            printf(" %d",tempS);
    }
    printf("\n");
    //Palindromes 
    printf("The Palindromes are:");
    for(tempS = start;tempS<=end;tempS++){
        if(isPalindrome(tempS))
            printf(" %d",tempS);
    }
    printf("\n");
    //Prime Numbers
    printf("The Prime numbers are:");
    for(tempS = start;tempS<=end;tempS++){
        if(isPrime(tempS))
            printf(" %d",tempS);
    }
    printf("\n");
    //Strong Numbers
    printf("The Strong numbers are:");
    for(tempS = start;tempS<=end;tempS++){
        if(isStrong(tempS))
            printf(" %d",tempS);
    }
    printf("\n");
    return 0;

}
















