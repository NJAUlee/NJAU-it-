//
// Created by 李豪 on 2023/10/23.
//

int checkInput(long double *inputNumber){
    long double number;
    int check;

    check=scanf("%Lf",&number);
    getchar();
    if(check==1){
        *inputNumber=number;
        return 1;
    }else {
        printf("非法输入！请重新输入！\n");
        return 0;
    }
}//输入检查