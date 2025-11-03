#include "main.hpp"





int main(){
    printf("Testing\n");

    printf("Factorial: \n");
    for(int i=-2;i<=10;i++){
        uint64_t result = nuck::factorial(i);
        printf("x: %d f(x): %lld\n", i, result);
    }
    printf("Fibonacci: \n");
    for(int i=-2;i<=10;i++){
        uint64_t result = nuck::fibonacci(i);
        printf("x: %d f(x): %lld\n", i, result);
    }
    printf("is even: \n");
    for(int i=-2;i<=10;i++){
        bool result = nuck::isEven(i);
        printf("x: %d f(x): %s\n", i, (result)?"True":"False");
    }
    printf("is odd: \n");
    for(int i=-2;i<=10;i++){
        bool result = nuck::isOdd(i);
        printf("x: %d f(x): %s\n", i, (result)?"True":"False");
    }
    printf("Prime: \n");
    for(int i=-6;i<=16;i++){
        bool result = nuck::isPrime(i);
        printf("x: %d f(x): %s\n", i, (result)?"True":"False");
    }
    printf("absolute value: \n");
    for(int i=-5;i<=5;i++){
        uint64_t result = nuck::abs(i);
        printf("x: %d f(x): %lld\n", i, result);
    }
    printf("GCD: \n");
    for(int i=-3;i<=13;i++){
        uint64_t result = nuck::gcd(6, i);
        printf("x1: %d x2: %d f(x1, x2): %lld\n", 6, i, result);
    }
    printf("LCM: \n");
    for(int i=-3;i<=13;i++){
        uint64_t result = nuck::lcm(6, i);
        printf("x1: %d x2: %d f(x1, x2): %lld\n", 6, i, result);
    }
    printf("Exponent: \n");
    for(int i=-2;i<=4;i++){
        for(int j=0;j<5;j++){
            double result = nuck::pow(i, j);
            printf("x1: %d x2: %d f(x1, x2): %lf\n", i, j, result);
        }
    }
    uint64_t result = nuck::pow(5, 11);
    printf("x1: %d x2: %d f(x1, x2): %lld\n", 5, 11, result);




}

























