#include "Calculator.h"
#include <math.h>
#include <exception>

Calculator::Calculator()
{}

Calculator::~Calculator()
{}

double Calculator::calculate(const double& a,const char& op,const double& b){

    switch(op){

        case '+':
            return plus(a,b);
            break;

        case '-':
            return minus(a,b);
            break;

        case '*':
            return multiply(a,b);
            break;

        case '/':
            return divide(a,b);
            break;

        case '^':
            return sqr(a);
            break;

        case '&':
            return sqrt(a);
            break;

        default:
            throw (new std::exception);

    }
}

double Calculator::plus(const double& a,const double& b){
    return a+b;
}

double Calculator::minus(const double& a,const double& b){
    return a-b;
}

double Calculator::multiply(const double& a,const double& b){
    return a*b;
}

double Calculator::divide(const double& a,const double& b){
    return a/b;
}

double Calculator::sqr(const double& a){
    return a*a;
}

double Calculator::sqrt(const double& a){
    return std::sqrt(a);
}
