//
// Created by 李豪 on 2023/10/23.
//

#ifndef UNTITLED5_START_H
#define UNTITLED5_START_H

#include <stdio.h>
#include "calculate.h"
#include "checkInput.h"
#include "checkInput.cpp"
#include "addition.cpp"
#include "division.cpp"
#include "multiplication.cpp"
#include "subtraction.cpp"

int start(){
    long double inputNumber1=0;
    long double inputNumber2=0;
    long double result;

    while (1) {
        int key=1;
        int flag=1;
        printf("----------------");
        printf("\n是否开启计算器？\n1 开启\t0 关闭\n");
        printf("----------------\n");
        scanf("%d",&key);
        getchar();
        if (key) {
            printf("请输入第一个数：\n");
            flag=checkInput(&inputNumber1);
            if (flag==0) {
                return 0;
            }

            int choice;
            printf("----------------\n");
            printf("1 加法\t2 减法 \t3 乘法\t4 除法\t5 退出\n");
            printf("----------------\n");
            printf("请选择操作：");
            scanf("%d",&choice);

            switch (choice) {
                case 1:
                    printf("请输入第二个数：");
                    flag=checkInput(&inputNumber2);
                    if (flag==0) {
                        return 0;
                    }
                    addition(inputNumber1, inputNumber2, &result);
                    printf("结果为：%Lf\n",result);
                    break;

                case 2:
                    printf("请输入第二个数：");
                    flag=checkInput(&inputNumber2);
                    if (flag==0) {
                        return 0;
                    }
                    subtraction(inputNumber1, inputNumber2, &result);
                    printf("结果为：%Lf\n",result);
                    break;

                case 3:
                    printf("请输入第二个数：");
                    flag=checkInput(&inputNumber2);
                    if (flag==0) {
                        return 0;
                    }
                    multiplication(inputNumber1, inputNumber2, &result);
                    printf("结果为：%Lf\n",result);
                    break;

                case 4:
                    printf("请输入第二个数：");
                    flag=checkInput(&inputNumber2);
                    if (flag==0) {
                        return 0;
                    }
                    flag=division(inputNumber1, inputNumber2, &result);
                    if (flag==0) {
                        return 0;
                    }
                    printf("结果为：%Lf\n",result);
                    break;

                case 5:
                    return 0;
            }
        }else {
            return 0;
        }
    }
}

#endif //UNTITLED5_START_H
