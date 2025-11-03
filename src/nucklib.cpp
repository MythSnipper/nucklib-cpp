#include "nucklib.h"


namespace nuck{

    uint64_t factorial(int64_t num){
        uint64_t ret = 1;
        for(int64_t i=2;i<=num;i++){
            ret *= i;
        }
        return ret;
    }
    uint64_t fibonacci(int64_t num){
        if(num <= 0){
            return 0;
        }
        uint64_t a = 1;
        uint64_t b = 1;
        uint64_t c = 1;
        for(int64_t i=3;i<=num;i++){
            c = a+b;
            a=b;
            b=c;
        }
        return c;
    }
    bool isEven(int64_t num){
        return num%2 == 0;
    }
    bool isOdd(int64_t num){
        return num%2 != 0;
    }
    bool isPrime(int64_t num){
        if(num<=1){
            return false;
        }
        if(num == 2 || num == 3){
            return true;
        }
        if(isEven(num)){
            return false;
        }
        for(int64_t i=3;i*i<=num;i+=2){
            if(num%i==0){
                return false;
            }
        }
        return true;
    }
    uint64_t abs(int64_t num){
        if(num<0){
            num = -num;
        }
        return num;
    }
    uint64_t gcd(int64_t num1, int64_t num2){
        num1 = abs(num1);
        num2 = abs(num2);
        int64_t num3;
        if(num2 == 0){
            return num1;
        }
        while(num1%num2 != 0){
            num3 = num1%num2;
            num1 = num2;
            num2 = num3;
            if(num2 == 0){
                return num1;
            }
        }
        return num2;
    }
    uint64_t lcm(int64_t num1, int64_t num2){
        return (abs(num1)*abs(num2))/gcd(num1, num2);
    }
    double pow(double num, double power){
        if(power == 0){
            return 1.0;
        }
        if(isOdd(power)){
            return num * (pow(num * num, (power-1)/2));
        }
        else{
            return pow(num * num, power/2);
        }
    }











}




