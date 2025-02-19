//Roational (Task 6)
//omega = (int)(k_PHI * (goal_theta - theta));
//right = omega*0.5;
//left = -omega*0.5;

//Transitional (Task 7)
//v = (int)(k_omega * (cos(theta* PI /180)*(x0-x)+sin(theta* PI /180)*(y0-y)));
//left = v;
//right = v;

//Both (Task 9)
//right = v + omega*0.5;
//left = v - omega*0.5;

//std::cout << left << " | " << (x0-x);
//std::cout << "\n";

std::cout << "u_l" << " | " << left << "\n";

theta_g = 180*atan2(yg-y0,xg-x0)/PI;
if((theta_g > 175 || theta_g < -175) && theta < -135) {std::cout << "Compensating" << "\n"; theta_left_comp = theta + 360;}
 else {theta_left_comp = theta;}

d_g = (int)(k_omega_2 * (cos(PI*theta_g/180)*(xg-x)+sin(PI*theta_g/180)*(yg-y)));
//right = d_g;
//left = d_g;




//d_p = (int)(k_PHI_2 * p * (theta_g-theta_left_comp));
d_p = (sin(PI*theta_g/180)*(x+p*cos(PI*theta_left_comp/180)-x0))   -  (cos(PI*theta_g/180)*(y+p*sin(PI*theta_left_comp/180)-y0));

std::cout << "d_p" << " | " << d_p << "\n";

omega = (int)(k_PSI_2 * d_p);



right = d_g + omega * 0.5;
left =  d_g - omega * 0.5;

//Full controller (Task 15)
//right = d_g + omega * 0.5;
//left =  d_g - omega * 0.5;

/*
//Transitions G
switch (current_state) {
 case rotational:
   if (abs(d_p) < 1) {current_state = transitional;
     std::cout << "stopped rotating" << "\n";
   }
   break;
 case transitional:
   if(abs(d_g) < 10 ) {
     current_state = idle;
     std::cout << "Stopped transitioning\n";
   }
   break;
 case idle:
   break;
 }


//controller functions f
switch (current_state) {
 case rotational :
   std::cout << "Rotating" << " | " << d_p << "\n";
   right = (int)(omega * 0.5);
   left =  (int)(-omega * 0.5);
   break ;
 case transitional :
   std::cout << "Transitioning" << " | " << d_g << " | (" << d_p << ")\n";
   right = (int)d_g;
   left = (int)d_g;
   break ;
 case idle :
 default:
   std::cout << "Idle" << "\n";
   left = 0;
   right = 0;
   break;
 }
*/
