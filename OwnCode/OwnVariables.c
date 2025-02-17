int h = 1;

double R = 0.033;
double L = 0.160;

double k_PHI = (float)(2*L/(h*R));
double k_omega = (float)(0.4*2/(h*R));
std::cout << "K_PHI: " << k_PHI << "\n";
std::cout << "K_omega: " << k_omega << "\n";
int goal_theta = 90;
int d_theta = 0;
int v = 0;
