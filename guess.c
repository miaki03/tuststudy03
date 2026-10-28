#include<stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    int n, e=1,a;
    srand((unsigned)time(NULL));
    a = rand()%100;
    while(1){
        printf("输入一个整数（1~100）：");
        while (scanf("%d", &n) != 1){
            while (getchar() != '\n');    /* 丢掉坏输入*/
            printf("不是整数，再来：");
        }
        if(n>a)printf("大了\n");
        if(n<a)printf("小了\n");
        if(n==a){
            printf("中了\n");
            printf("继续吗（1或0）：");
            while (scanf("%d", &e) != 1 || (e!=0 && e!=1)){
                while (getchar() != '\n');    /* 丢掉坏输入*/
                printf("不是0或1，再来：");
                a = rand()%100;
            }
            if(e!=1)break;
        }

    }
    printf("游戏结束。\n");
    return 0;
}