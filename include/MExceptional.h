//
// Created by Liming on 2023/6/19.
//

#ifndef MATHEMATICAL_EXPRESSION_CPP_MEXCEPTIONAL_H
#define MATHEMATICAL_EXPRESSION_CPP_MEXCEPTIONAL_H

#include <exception>
#include <string>

namespace ME {

    class MExceptional : public std::exception {
    public:
        explicit MExceptional(std::string exStr);

        const char *what() const _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_NOTHROW override;

    private:
        const std::string ex_Str;
    };

    class WrongFormat : public MExceptional {
    public:
        explicit WrongFormat(const std::string &exStr);
    };

    class AbnormalOperation : public MExceptional {
    public:
        explicit AbnormalOperation(const std::string &exStr);
    };
} // ME

#endif //MATHEMATICAL_EXPRESSION_CPP_MEXCEPTIONAL_H
