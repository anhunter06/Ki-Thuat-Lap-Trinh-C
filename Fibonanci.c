#include <math.h>
#include <stdbool.h>
#include <stdio.h>
/*
    Author: An Hunter
    Name: Nguyễn Tuấn An
    Created at: 10/21/2024
*/
bool isPerfectSquare(int n) {
    int i = sqrt(n);
    if (i* i== n) return true;
    return false;
}
bool isFibonanci(int n) {
    return isPerfectSquare(5 * n * n +4) || isPerfectSquare(5 * n * n - 4);
}
// Kiểm tra từ a đến b có những số fibonanci nào.
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    for (int i = a; i <= b;i++) {
        if (isFibonanci(i)) {
            printf("%d is Fibonanci\n", i);
        } else {
            printf("%d is not Fibonanci\n", i);
        }
    }
}
