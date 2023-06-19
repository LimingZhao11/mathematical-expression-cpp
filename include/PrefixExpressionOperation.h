//
// Created by Liming on 2023/6/19.
//

#ifndef MATHEMATICAL_EXPRESSION_CPP_PREFIXEXPRESSIONOPERATION_H
#define MATHEMATICAL_EXPRESSION_CPP_PREFIXEXPRESSIONOPERATION_H

#include "NumberCalculation.h"
#include "CalculationResults.h"

namespace ME {
    /**
 * 解析一个无括号的数学计算公式的组件，针对不含括号的计算公式，该组件可以提供计算支持
 * <p>
 * Parse a component of mathematical calculation formula without brackets. This component can provide calculation support for calculation formula without brackets
 *
 * @author zhao
 */
    class PrefixExpressionOperation : public NumberCalculation {
    public:
        std::string formatStr(std::string string) override;

        void check(std::string basicString) override;

        ME::CalculationNumberResults operator>>(std::string &format);

        ME::CalculationNumberResults operator<<(std::string &format);

        string getName() override;

        ME::CalculationNumberResults calculation(std::string Formula, bool formatRequired) override;

        CalculationNumberResults calculation(std::string Formula) override;
    };
}

#endif //MATHEMATICAL_EXPRESSION_CPP_PREFIXEXPRESSIONOPERATION_H
