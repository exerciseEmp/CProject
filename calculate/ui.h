//
// Created by Administrator on 2022/10/25 0025.
//

#ifndef CALCULATE_UI_H
#define CALCULATE_UI_H

#include "calculator.h"

typedef struct {
    //计算器缓存的值
    void *text_displayer;
    CalcContext *context;
} UiContext;
#endif //CALCULATE_UI_H
