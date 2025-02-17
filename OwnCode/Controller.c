//
//int omega =  k_PHI * (goal_theta - theta);

//Roation
//right = (int)(k_PHI * (goal_theta - theta) * 0.5);
v = k_omega * (cos(theta)*(x0-x)+sin(theta)*(y0-y));
left = v;
right = v;
std::cout << left << " | " << (x0-x);
std::cout << "\n";
//right = (int)((float)omega * -0.5);
//left = -right;
