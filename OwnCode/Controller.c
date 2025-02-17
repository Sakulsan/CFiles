//Roational (Task 6)
omega = (int)(k_PHI * (goal_theta - theta));
//right = omega*0.5;
//left = -omega*0.5;

//Transitional (Task 7)
v = (int)(k_omega * (cos(theta* PI /180)*(x0-x)+sin(theta* PI /180)*(y0-y)));
//left = v;
//right = v;

//Both (Task 9)
//right = v + omega*0.5;
//left = v - omega*0.5;

std::cout << left << " | " << (x0-x);
std::cout << "\n";

//
d_g = (int)(k_omega_2 * (cos(theta* PI /180)*(xg-x)+sin(theta* PI /180)*(yg-y)));

theta_g = 180*(atan2(yg-y,xg-x))/PI;
std::cout << "Theta_g" << " | " << theta_g << "\n";

//Not used (bad approximation?) (Task 14)
d_p=p*(theta_g-theta);
omega = (int)(k_PHI_2 * d_p);
//right = omega * 0.5;
//left =  omega * 0.5;

//Full controller (Task 15)
right = d_g + omega * 0.5;
left =  d_g - omega * 0.5;
