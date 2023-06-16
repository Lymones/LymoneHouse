#include <bits/stdc++.h>
#ifndef MATH4STR_HPP
#define MATH4STR_HPP
class highPrecisionNumber {
private:
    std::string numberWithoutPoint;
    long long pointPosition;
    bool isFloat, isMinues;

public:
    highPrecisionNumber();
    highPrecisionNumber(std::string source);
    highPrecisionNumber approximate(long long effectiveDigit);
    std::string approximate(long long effectiveDigit);
    highPrecisionNumber operator+(highPrecisionNumber right);
    highPrecisionNumber operator-(highPrecisionNumber right);
    highPrecisionNumber operator*(highPrecisionNumber right);
    highPrecisionNumber operator/(highPrecisionNumber right);

};
class mathExpression {
private:
    std::string expression;
    std::vector<highPrecisionNumber> numberStack;
    std::vector<char> operatorStack;
    highPrecisionNumber answer;
    long long unmatchedBracket;
    
public:
    mathExpression();
    mathExpression(std::string source);
    std::optional<highPrecisionNumber> refresh();
    bool pushChar(char newchar);
    bool popChar(int length=1);
    bool insertChar(int position,char newchar);
    bool eraseChar(int position,int length=1);
    std::string printExpression();

};
class expressionManage{
private:
    mathExpression** datapoint;
public:
    expressionManage(int maxsize=10);
    ~expressionManage();
};
#endif // MATH4STR_HPP
