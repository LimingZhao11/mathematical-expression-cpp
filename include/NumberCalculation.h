//
// Created by Liming on 2023/6/19.
//

#ifndef MATHEMATICAL_EXPRESSION_CPP_NUMBERCALCULATION_H
#define MATHEMATICAL_EXPRESSION_CPP_NUMBERCALCULATION_H

#include "Calculation.h"
#include "CalculationResults.h"

class NumberCalculation : public Calculation {
    /**
     * 计算一个数学表达式，并将计算细节与计算结果存储到数值结果集中。
     * <p>
     * Compute a mathematical expression and store the calculation details and results in the numerical result set.
     *
     * @param Formula        被计算的表达式，要求返回值是一个数值。
     *                       <p>
     *                       The returned value of the evaluated expression is required to be a numeric value.
     * @param formatRequired 是否需要被格式化，用于确保公式格式正确。
     *                       <p>
     *                       Whether it needs to be formatted to ensure that the formula format is correct.
     * @return 数值结果集对象，其中保存着每一步的操作数据，以及最终结果数值
     * <p>
     * Numerical result set object, which stores the operation data of each step and the final result value
     */
    virtual ME::CalculationNumberResults calculation(std::string Formula, bool formatRequired) = 0;

    virtual /**
     * 计算一个数学表达式，并将计算细节与计算结果存储到数值结果集中。
     * <p>
     * Compute a mathematical expression and store the calculation details and results in the numerical result set.
     *
     * @param Formula 被计算的表达式，要求返回值是一个数值。
     *                <p>
     *                The returned value of the evaluated expression is required to be a numeric value.
     * @return 数值结果对象，该返回值是一个专用于存储数值计算结果的包装类，其中有着计算数据的记录以及结果的保存，可以直接获取到
     * <p>
     * Numerical result object. The returned value is a wrapper class dedicated to storing numerical calculation results. It contains the records of calculation data and the saving of results, which can be directly obtained
     * @see core.container.CalculationNumberResults
     */
    ME::CalculationNumberResults calculation(std::string Formula) = 0;
};


#endif //MATHEMATICAL_EXPRESSION_CPP_NUMBERCALCULATION_H
