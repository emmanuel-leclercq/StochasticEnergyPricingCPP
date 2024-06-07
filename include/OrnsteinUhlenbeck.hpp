//
// Created by Emmanuel_Leclercq on 07/06/2024.
//

#ifndef STOCHASTICENERGYPRICINGCPP_ORNSTEINUHLENBECK_H
#define STOCHASTICENERGYPRICINGCPP_ORNSTEINUHLENBECK_H

template <typename T>
class OrnsteinUhlenbeck{
private:
    double mu;
    double sigma;
    double theta;
    double x0;
    double t;

public:
    OrnsteinUhlenbeck(double mu, double sigma, double theta, double x0, double t);
    double drift(double x, double t);
    double diffusion(double x, double t);
    double sample();
    double integrate();
};


#endif //STOCHASTICENERGYPRICINGCPP_ORNSTEINUHLENBECK_H
