//
// Created by Liming on 2023/6/19.
//

#include "MExceptional.h"

#include <utility>

namespace ME {

    const char *MExceptional::what() const noexcept {
        return this->ex_Str.c_str();
    }

    MExceptional::MExceptional(std::string exStr) : ex_Str(std::move(exStr)) {

    }

    WrongFormat::WrongFormat(const std::string &exStr) : MExceptional(exStr) {}

    AbnormalOperation::AbnormalOperation(const std::string &exStr) : MExceptional(exStr) {}
} // ME