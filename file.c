#include<stdio.h>

int function(int n) {
    if (n  < 3)
        return n;

    return function(n - 1)  + function(n - 2);
}

int main() {

    return 0;
}