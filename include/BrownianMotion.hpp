//
// Created by Emmanuel_Leclercq on 07/06/2024.
//

#ifndef STOCHASTICENERGYPRICINGCPP_BROWNIANMOTION_HPP
#define STOCHASTICENERGYPRICINGCPP_BROWNIANMOTION_HPP

#include <random>
#include <cmath>

template <typename T>
class BrownianMotion{
private:
    double mu;
    double sigma;
    double x0;
    double t;
    std::normal_distribution<double> normal;
    std::default_random_engine generator;

public:
    BrownianMotion(double mu, double sigma, double x0, double t): mu(mu), sigma(sigma), x0(x0), t(t), normal(0.0, 1.0) {}
    double drift(double x, double t) { return mu * x; }
    double diffusion(double x, double t) { return sigma * x; }
    double sample() { return x0 + normal(generator) * sqrt(t); }
    double integrate() { return x0 + mu * t; }


};

#endif //STOCHASTICENERGYPRICINGCPP_BROWNIANMOTION_HPP
