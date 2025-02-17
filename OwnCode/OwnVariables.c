int h = 1;

double R = 0.033;
double L = 0.160;

double k_PHI = (float)(2*L/(h*R));
double k_omega = (float)(2/(H*R));
std::cout << "K_PHI: " << k_PHI << "\n";
int goal_theta = 90;
int goal_d0 = 60;
