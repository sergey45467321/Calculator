#include <iostream>
#include <math.h>
#include <Calculator.h>

int main()
{
    Calculator oleg;
    try{
    while(1)
        {
            double in1,in2;
            char op;

            std::cin>>in1;
            std::cin>>op;

            if(op == 'q' || op == 'Q')
                break;

            if(op == '^' || op == '&'){
                std::cout << oleg.calculate(in1,op) << std::endl;
                continue;
            }
            std::cin>>in2;
            std::cout << oleg.calculate(in1,op,in2) << std::endl;
        }
    }catch(...){
        std::cout << "wrong data!\n";
    }

    return 0;
}
