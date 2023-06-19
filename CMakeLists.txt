cmake_minimum_required(VERSION 3.23)
project(mathematical_expression_cpp)

set(CMAKE_CXX_STANDARD 11)

# 头文件存储目录设置
include_directories(${PROJECT_SOURCE_DIR}/include)
add_library(
        mathematical_expression_cpp SHARED
        src/core/container/CalculationResults.cpp include/CalculationResults.h
        include/Utils.h
        include/ConstantRegion.h
        src/core/manager/CalculationManagement.cpp include/CalculationManagement.h
        src/core/calculation/PrefixExpressionOperation.cpp
        src/exceptional/MExceptional.cpp include/MExceptional.h
        src/utils/NumberUtils.cpp src/utils/StrUtils.cpp src/dataContainer/MEStack.cpp include/MEStack.h include/PrefixExpressionOperation.h src/core/calculation/NumberCalculation.cpp include/NumberCalculation.h src/core/calculation/Calculation.cpp include/Calculation.h include/mathematical_expression.h)

