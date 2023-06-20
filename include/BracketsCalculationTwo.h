//
// Created by Liming on 2023/6/20.
//

#ifndef MATHEMATICAL_EXPRESSION_CPP_BRACKETSCALCULATIONTWO_H
#define MATHEMATICAL_EXPRESSION_CPP_BRACKETSCALCULATIONTWO_H

#include "regex"
#include "BracketsCalculation.h"

namespace ME {
    class BracketsCalculationTwo : public BracketsCalculation {

    public:
        string formatStr(std::string string) override;

        void check(std::string string) override;

        ME::CalculationNumberResults operator>>(std::string &format);

        ME::CalculationNumberResults operator<<(std::string &format);

        string getName() override;

        CalculationNumberResults calculation(std::string Formula, bool formatRequired) override;
    };
}


#endif //MATHEMATICAL_EXPRESSION_CPP_BRACKETSCALCULATIONTWO_H
