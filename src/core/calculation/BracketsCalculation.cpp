//
// Created by Liming on 2023/6/20.
//

#include "BracketsCalculation.h"
#include "regex"
#include "ConstantRegion.h"
#include "Utils.h"
#include "MExceptional.h"

namespace ME {
    string BracketsCalculation::formatStr(std::string string) {
        return std::regex_replace(string, ME::ALL_INVISIBLE_CHARACTERS_PATTERN, NO_CHAR);
    }

    double BracketsCalculation::calculation2(std::string Formula) {
        std::string a;
        std::string b;
        bool isOk = false;
        char Operator = 0;
        for (const auto &c: Formula) {
            if (!isOk) {
                if (StrUtils::IsAnOperator(c)) {
                    Operator = c;
                    isOk = true;
                } else {
                    b += c;
                }
            } else {
                a += c;
            }
        }
        if (Operator != 0) {
            return NumberUtils::calculation(
                    Operator, StrUtils::stringToDouble(a), StrUtils::stringToDouble(b)
            );
        } else {
            throw ME::AbnormalOperation("您的公式格式错误，未解析成功，请您检查您的格式哦！\n" +
                                        "The format of your formula is wrong, and it was not parsed successfully. Please check your format!\n" +
                                        "error format => " + Formula);
        }
    }
}
