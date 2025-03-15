/*If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9.
The sum of these multiples is 23. Find the sum of all the multiples of 3 or 5 below 1000.*/
#include <stdio.h>
unsigned int unitSum(unsigned int n)
{
    return (n*(n+1))/2;
}
int main(){
    int n=1;
    int sum=0;
    int actualSum = 3*unitSum((int)(999/3)) + 5*unitSum((int)(999/5)) - 15*unitSum((int)(999/15));
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
    printf("%d\n", sum);
    printf("%d\n", actualSum);
}