#include <stdio.h>
#include "NumClass.h"



int main(){ 
    
    
    int start=0,end=0;
    printf("please enter 2 numbers \n");
    scanf("%d%d",&start, &end);
    //Armstrong numbers
    printf("The Armstrong numbers are:");
    for(start;start<=end;start++){
        if(isArmstrong(start))
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
        if(isPalindrome(start))
            printf(" %d",start);
    }
    printf("\n");
    //Strong Numbers
    printf("The Strong numbers are:");
    for(start;start<=end;start++){
        if(isPalindrome(start))
            printf(" %d",start);
    }
    printf("\n");
    return 0;

}







