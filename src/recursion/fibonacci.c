#include<stdio.h>
//Note: When you ask for fib of a partivular number, you're basically asking for the 
//value at that particular index.
int fib(int n){

    if(n<=1){
        return n;
    }
    return (fib(n-1) + fib(n-2));
    
}

int main(){

    int num = 0;
    printf("Enter a number :");
    scanf("%d", &num);
    printf("%d",fib(num));

}