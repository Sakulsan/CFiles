int h = 1;

double R = 0.033;
double L = 0.160;
double p = 100; //Idk about what p should be

double k_PHI = (float)(0.5*2*L/(h*R));
double k_omega = (float)(0.5*2/(h*R));
double k_omega_2 = (float)(0.5*2/(h*R));
double k_PSI_2 = (float)(10*L/(p*h*R));
std::cout << "K_PSI_1: " << k_PHI << "\n";
std::cout << "K_omega_1: " << k_omega << "\n";
std::cout << "K_PSI_2: " << k_PSI_2 << "\n";
std::cout << "K_omega_2: " << k_omega_2 << "\n";
int goal_theta = 0;
int omega = 0;
double theta_g = 0;
int theta_left_comp = 0;
int v = 0;
int d_g = 0;
double d_p = 0;

//The state Q
enum movement_states { idle , rotational , transitional };
enum movement_states current_state = rotational;

//Possible tuple/struct?
int points_x [] = {0,0,1};
int points_y [] = {0,1,1};
int i_current_point = 0;
