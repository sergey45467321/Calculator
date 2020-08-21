#ifndef CALCULATOR_HPP
#define CALCULATOR_HPP
#include <math.h>

class Calculator
{

    //Methods
    public:
        //Constructor/Destructor - CLASS
         Calculator();
        ~Calculator();


        double calculate(const double&,const char&, const double& = 0);


    private:
        double plus     (const double&,
                         const double&);

        double minus    (const double&,
                         const double&);

        double multiply (const double&,
                         const double&);

        double divide   (const double&,
                         const double&);

        double sqr      (const double&);

        double sqrt     (const double&);

};

#endif // CALCULATOR_HPP
