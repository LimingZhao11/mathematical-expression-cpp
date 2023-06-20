//
// Created by Liming on 2023/6/20.
//

#ifndef MATHEMATICAL_EXPRESSION_CPP_BRACKETSCALCULATION_H
#define MATHEMATICAL_EXPRESSION_CPP_BRACKETSCALCULATION_H

#include <regex>
#include "PrefixExpressionOperation.h"

namespace ME {

    static const std::regex ALL_INVISIBLE_CHARACTERS_PATTERN = std::regex("\\s+");

    /**
     * 括号解析算法计算一个公式的计算组件的父类，其中的计算具体实现是一个抽象，等待实现
     * <p>
     * The bracket parsing algorithm calculates the parent class of the calculation component of a formula, in which the specific implementation of the calculation is an abstract, waiting to be implemented
     *
     * @author zhao
     */
    class BracketsCalculation : public PrefixExpressionOperation {

    public:
        string formatStr(std::string string) override;

        /**
         * 计算一个带有两个操作数 一个操作符的计算公式的结果
         *
         * @param BinaryFormula 公式 例如 1 + 2
         * @return 计算结果数值
         */
        static double calculation2(std::string Formula);

    };
}


#endif //MATHEMATICAL_EXPRESSION_CPP_BRACKETSCALCULATION_H
