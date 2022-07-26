//
//io 流
// Created by Administrator on 2022/9/19 0019.
//
#include <stdio.h>
#include "head/io_utils.h"
#include <string.h>

int main() {
    //file io流 没有定义channel概念 每个os都可以按照自己去实现file
    FILE *file = fopen("../CMakeLists.txt", "r");
    if (!file) {
        //打开失败
        perror("fopen");
    } else {
        puts("open file success");
        //出现错误
        int error_code = ferror(file);
        perror(strerror(error_code));
        //判断文件是否结束 如果结束返还非0的值 反之返回0
        int eof = feof(file);
        PRINTLN_INT(eof);

    }
    fclose(file);
    //其他定义的io stream
    //stdout 标准输出流
    //stderr 标准错误流
    //stdin  标准输入流
    return 0;
}