//
// Created by 李豪 on 2023/10/23.
//

int division(long double input1,long double input2,long double *result){
    long double value;

    if(input2==0){
        printf("被除数不能为0\n");
        return 0;
    }else {
        value=input1/input2;
        *result=value;
        return 1;
        }
    }
//除法