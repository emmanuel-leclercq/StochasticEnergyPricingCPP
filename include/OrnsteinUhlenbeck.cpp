//
// Created by Emmanuel_Leclercq on 07/06/2024.
//


OrnsteinUhlenbeck::OrnsteinUhlenbeck(double mu, double sigma, double theta, double x0, double t) {
    this->mu = mu;
    this->sigma = sigma;
    this->theta = theta;
    this->x0 = x0;
    this->t = t;
}

double OrnsteinUhlenbeck::drift(double x, double t) {
    return theta * (mu - x);
}

double OrnsteinUhlenbeck::diffusion(double x, double t) {
    return sigma;
}

double OrnsteinUhlenbeck::sample() {
    return 0;
}

double OrnsteinUhlenbeck::integrate() {
    return 0;
}
