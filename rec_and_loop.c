#include <stdio.h>
#include <time.h>
//рекурсия
long long fibo_r(int x){
    if(x<1) {
        return 0;
    }
    if(x<2) {
        return 1;
    }
    return fibo_r(x-2)+fibo_r(x-1);
}
//цикл
int fibo_c(int N){
    int a = 1, b = 1, c;
    if (N <= 2){
        return 1;
    }else{
        for (int i = 3; i <= N; i++){
            c = a + b;
            a = b; b = c;
        }
    }
    return b;
}

int main(){
    double time_spent = 0.0;
    clock_t begin = clock();
    printf("%lld\n", fibo_r(40));
    
    clock_t end = clock();
    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
    printf("time is: %f\n", time_spent);
    
    time_spent = 0.0;
    clock_t begin2 = clock();
    printf("%d\n", fibo_c(40));
    clock_t end2 = clock();
    time_spent += (double)(end2 - begin2) / CLOCKS_PER_SEC;
    printf("time is: %f\n", time_spent);
}
