//
// Created by zhao on 2023/6/18.
//

#include "CalculationResults.h"

#include <utility>

namespace ME {

    int CalculationBooleanResults::getResultLayers() {
        return this->Layers;
    }

    string CalculationBooleanResults::getCalculationSourceName() {
        return this->source;
    }

    bool CalculationBooleanResults::getResult() const {
        return this->result;
    }

    CalculationBooleanResults::CalculationBooleanResults(const bool result, string source, const int layers,
                                                         const double left, const double right) : result(result),
                                                                                                  source(std::move(
                                                                                                          source)),
                                                                                                  Layers(layers),
                                                                                                  left(left),
                                                                                                  right(right) {}

    double CalculationBooleanResults::getLeft() const {
        return this->left;
    }

    double CalculationBooleanResults::getRight() const {
        return this->right;
    }

    CalculationBooleanResults::~CalculationBooleanResults() = default;

    // ******************************************************


    int CalculationNumberResults::getResultLayers() {
        return this->result_layers;
    }

    string CalculationNumberResults::getCalculationSourceName() {
        return this->source;
    }

    int CalculationNumberResults::getResult() const {
        return this->result;
    }

    bool CalculationNumberResults::operator<(const CalculationNumberResults &rhs) const {
        return result < rhs.result;
    }

    bool CalculationNumberResults::operator>(const CalculationNumberResults &rhs) const {
        return result < rhs.result;
    }

    bool CalculationNumberResults::operator<=(const CalculationNumberResults &rhs) const {
        return result <= rhs.result;
    }

    bool CalculationNumberResults::operator>=(const CalculationNumberResults &rhs) const {
        return result >= rhs.result;
    }

    bool CalculationNumberResults::operator==(const CalculationNumberResults &rhs) const {
        return result == rhs.result;
    }

    bool CalculationNumberResults::operator!=(const CalculationNumberResults &rhs) const {
        return result != rhs.result;
    }

    CalculationNumberResults::CalculationNumberResults(const int result_layers, const int result, string source) :
            result_layers(result_layers), result(result), source(std::move(source)) {
    }

    CalculationNumberResults::~CalculationNumberResults() = default;

}