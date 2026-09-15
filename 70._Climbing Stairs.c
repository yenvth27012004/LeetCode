#include<stdio.h>
    int climbStairs(int n) {
        int kq[46];
        kq[1] = 1;
        kq[2] = 2;
        for(int i = 3; i <= n; i++) {
            kq[i] = kq[i-1] + kq[i-2];
        }
        return kq[n];
    }
    int main(){
        int n;
        printf("Nhap n: ");
        scanf("%d", &n);
        printf("So cach leo cau thang: %d", climbStairs(n));
        return 0;
    }
