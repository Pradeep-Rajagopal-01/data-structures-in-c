#include<stdio.h>

int factorial(int n){

    if (n <= 1)
    {
        return 1;
    }

    // int y=factorial(n-1);
    return(n * factorial(n-1));
    
}

int main(void){
    int input;
    printf("Enetr the number you want to find the factorial of : ");
    scanf("%d", &input);
    printf("%d",factorial(5));
    return 0;
};