//
// Created by Emmanuel Leclercq on 25/05/2024.
//

#ifndef STOCHASTICENERGYPRICINGCPP_STOCHASTICINTEGRAL_HPP
#define STOCHASTICENERGYPRICINGCPP_STOCHASTICINTEGRAL_HPP


#include "StochasticProcess.hpp"
#include "utils.hpp"

template <typename T>
class StochasticIntegral{
private:
    Process<T> process;
    double t;
    double x0;
    double x;
    double dt;
    double result;

public:
    StochasticIntegral(Process<T> process, double t, double x0, double x, double dt): process(process), t(t), x0(x0), x(x), dt(dt), result(0.0) {}
    double integrate(){
        double sum = 0.0;
        double t = 0.0;
        while(t < this->t){
            sum += process.sample(x, t) * dt;
            t += dt;
        }
        result = sum;
        return sum;
    }
    double getResult() const { return result; }

};

#endif //STOCHASTICENERGYPRICINGCPP_STOCHASTICINTEGRAL_HPP
