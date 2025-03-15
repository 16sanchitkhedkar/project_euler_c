/*If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9.
The sum of these multiples is 23. Find the sum of all the multiples of 3 or 5 below 1000.*/
#include <stdio.h>
int unitSum(int n){
    return (n*(n+1))/2;
}
int bruteForceSum(int n){
    int sum=0;
    while(n<1000){
        if((n%3==0) && (n%5==0)){
            sum+=n;
        }
        if((n%3==0) && (n%5!=0)){
            sum+=n;
        }
        if((n%5==0) && (n%3!=0)){
            sum+=n;
        }
        n++;
    }
    return sum;
}
int main(){
    int loopSum = bruteForceSum(1);
    int formulaSum = 3*unitSum((int)(999/3)) + 5*unitSum((int)(999/5)) - 15*unitSum((int)(999/15));
    
    printf("Sum by Brute Force: %d\n", loopSum);
    printf("Sum by using formula: %d\n", formulaSum);
}