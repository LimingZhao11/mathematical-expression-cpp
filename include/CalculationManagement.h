//
// Created by Liming on 2023/6/18.
//

#ifndef MATHEMATICAL_EXPRESSION_CPP_CALCULATIONMANAGEMENT_H
#define MATHEMATICAL_EXPRESSION_CPP_CALCULATIONMANAGEMENT_H

#include <ctime>
#include "unordered_map"
#include "Calculation.h"


namespace ME {

    /**
     * 数学表达式解析库的版本号。
     */
    static const int VERSION = 1.0;

    /**
     * 数学表达式组件启动的时刻对应的时间戳对象，此对象从第一次使用数学表达式管理者对象开始计算。
     */
    static const time_t START_TIME = time(nullptr);


#endif //MATHEMATICAL_EXPRESSION_CPP_CALCULATIONMANAGEMENT_H
}