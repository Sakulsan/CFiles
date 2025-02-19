//Rotational controller
//Roational (Task 6)
//omega = (int)(k_PHI * (goal_theta - theta));
//right = omega*0.5;
//left = -omega*0.5;
//Transitional (Task 7)
//left = v;
//right = v;
//Both (Task 9)
// right = v + omega*0.5;
// left = v - omega*0.5;
//std::cout << left << " | " << (x0-x);
//std::cout << "\n";
//Go-to-Goal controller
// Task 11 controller with omega = 0

theta_g = 180*(atan2(yg-y0,xg-x0))/PI;
if(abs(theta_g) > 178 && theta < 135 ) {theta_left = theta + 360;}
 else {theta_left = theta;}

d_g = (double)(k_omega_2 * (cos(theta_g* PI /180)*(xg-x)+ sin(theta_g* PI /180)*(yg-y)));
std::cout << "o";

//Transitions G
switch (current_state) {
 case rotational:
   if ((int)(theta_g) == (int)theta_left) {current_state = transitional;
     std::cout << "stopped rotating, omega=" << omega << "\n";
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
   v = (int)(k_omega * (cos(theta* PI /180)*(x0-x)+sin(theta* PI /180)*(y0-y))); //The velocity to align our position with the origin (be nudge tolerant)
   omega = (int)(k_PHI * (theta_g - theta_left)); //Rotational velocity when rotating

   std::cout << "Rotating" << " | " << omega << "\n";
   right = (int)(v+omega * 0.5); //Task 9
   left =  (int)(v-omega * 0.5);
   break ;
 case transitional:
   d_p = (sin(theta_g * PI/180.0) * ((x + p*cos(theta_left * PI/180.0)) - x0))
     - (cos(theta_g * PI/180.0) * ((y + p*sin(theta_left * PI/180.0)) - y0));
   omega = (double)(k_PHI_2 * d_p);
   std::cout << "Transitioning" << " | " << d_g << " | (Rotation offset: " << d_p << ")\n";
   right = 0.5*d_g + omega; //Task 15
   left =  0.5*d_g - omega;
   break ;
 case idle :
 default:
   std::cout << "Idle" << "\n";
   left = 0;
   right = 0;
   break;
 }
