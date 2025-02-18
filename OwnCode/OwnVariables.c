int h = 1;

double R = 0.033;
double L = 0.160;
double p = 2; //Idk about what p should be

double k_PHI = (float)(0.5*2*L/(h*R));
double k_omega = (float)(0.5*2/(h*R));
double k_omega_2 = (float)(0.5*2/(h*R));
double k_PHI_2 = (float)(0.5*2*L/(p*h*R));
std::cout << "K_PHI: " << k_PHI << "\n";
std::cout << "K_omega: " << k_omega << "\n";
int goal_theta = 90;
int omega = 0;
double theta_g = 0;
int v = 0;
int d_g = 0;
int d_p = 0;

//The state Q
enum movement_states { idle , rotational , transitional };
enum movement_states current_state = rotational;

int xg_old = xg; //Used for tranition out of "Idle"
int yg_old = yg;
