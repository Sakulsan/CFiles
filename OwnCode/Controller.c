//Roation
d_theta = (int)(k_PHI * (goal_theta - theta) * 0.5);
//right = d_theta;
//left = -d_theta;

v = (int)(k_omega * (cos(theta* PI /180)*(x0-x)+sin(theta* PI /180)*(y0-y)));
left = v;
right = v;

std::cout << left << " | " << (x0-x);
std::cout << "\n";
