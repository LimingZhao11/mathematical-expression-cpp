//
// Created by Liming on 2023/6/19.
//

#include "MEStack.h"

namespace ME {
    std::ostream &operator<<(std::ostream &out, const MEStack<int> &meStack) {
        for (const auto &item: meStack.c) {
            out << item << '\t';
        }
        return out << std::endl;
    }

    std::ostream &operator<<(std::ostream &out, const MEStack<double> &meStack) {
        for (const auto &item: meStack.c) {
            out << item << '\t';
        }
        return out << std::endl;
    }

    std::ostream &operator<<(std::ostream &out, const MEStack<char> &meStack) {
        for (const auto &item: meStack.c) {
            out << item << '\t';
        }
        return out << std::endl;
    }

    std::ostream &operator<<(std::ostream &out, const MEStack<std::string> &meStack) {
        for (const auto &item: meStack.c) {
            out << item << '\t';
        }
        return out << std::endl;
    }
} // ME