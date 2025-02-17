//Roational (Task 6)
omega = (int)(k_PHI * (goal_theta - theta) * 0.5);
//right = omega;
//left = -omega;

//Transitional (Task 7)
v = (int)(k_omega * (cos(theta* PI /180)*(xg-x)+sin(theta* PI /180)*(yg-y)));
//left = v;
//right = v;

//Both (Task 9)
right = v + omega*0.5;
left = v - omega*0.5;

std::cout << left << " | " << (x0-x);
std::cout << "\n";

//
//d_g = (int)(k_omega_2 * (cos(theta* PI /180)*(xg-x)+sin(theta* PI /180)*(yg-y)));

theta_g = atan2(yg-y,xg-x);
std::cout << "Theta_g" << " | " << d_g << "\n";

//Not used (bad approximation?)
d_p=p*(theta_g-theta);
omega = (int)(k_PHI_2 * d_p);
//right = omega * 0.5;
//left = -omega * 0.5;
